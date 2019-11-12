#/bin/bash

cp /etc/passwd passwd
cat passwd | cut --delimiter=: --fields=1 | sort > $(date +%U)passwd
