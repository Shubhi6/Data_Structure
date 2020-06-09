#!/bin/bash

if [ $# -eq 0 ]
then
    echo Error: Please pass the new directory name
else
    mv -T "$PWD" "../$1"
    echo Current directory will be renamed to $1
fi
