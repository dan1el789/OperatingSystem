#!/bin/bash

mkdir $1
cp resources/run.sh $1/run.sh
cp resources/commit.sh $1/commit.sh
cp resources/app.c $1/app.c
./$1/commit.sh "init $1"
