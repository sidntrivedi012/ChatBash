#! /bin/bash

gcc server.c
./a.out
if [ $? -eq 0 ]
then
   echo "Friday is going down "
   killall -9 a.out
else
    echo "Friday failed"
fi 