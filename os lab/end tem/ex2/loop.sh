#!/bin/bash
a=
b= 
echo "Ener first number ="
read a
echo "Ener second number ="
read b

while [ $a -le $b ]
do
mod=$(( $a % 2 ))
if [ $mod -eq 0 ]
then
echo "$a"
fi
a=$(( $a + 1 ))
done


