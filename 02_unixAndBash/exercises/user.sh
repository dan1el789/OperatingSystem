#! /bin/bash
function printError {
	echo "./user.sh --help for help" 
        exit 1
}

function printInfo {
	echo "./user.sh -u USERNAME returns a 0 if the user is logged in else a 1"
	echo "./user.sh -l prints a list of the users which are logged in" 
	echo "default all known users on the systems are printed"
	exit 0
}

function printLoggedUsers {
	who -u | cut --delimiter=: --fields=1
	exit 0	
}

function printAllUsers {
	cat /etc/passwd | cut --delimiter=: --fields=1 | sort
	exit 0
}

function isUserLoggedIn {
	if [ $# -lt 1 ]
	then
		echo "operation -u requires a parameter"
		printError
	fi
	var=$(who -u | grep "$1\s" | wc -l)
	echo $var
	exit $var
}

if [ $# -lt 1 ]   
then
	printAllUsers
fi

case $1 in
	-l) printLoggedUsers;;
        -s) isUserLoggedIn $2;;
	--help) printInfo;;
	*) printError;;
esac
