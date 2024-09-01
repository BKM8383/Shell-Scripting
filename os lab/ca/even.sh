#!/bin/bash
a=
echo "Enter the upper limit = "
read a
b=1
while [ $a -ge 0 ]
do
mod=$((b%2))
if [ $mod -eq 0 ]
then
echo "$b"
fi
b=$(( b + 1 ))
a=$(( a - 1 ))
done
