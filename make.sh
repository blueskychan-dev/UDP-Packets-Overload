#!/bin/bash

if [[ -f "main.cpp" ]]
then
    echo "OK!"
    exit
fi
echo "NO"
echo "File not found! exit...."
killall make