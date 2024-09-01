#!/bin/bash
a=
b=
c=
echo "Enter first number ="
read a
echo "Enter seconf number ="
read b
echo "Ener third number ="
read c

if [ $a -lt $b ]
then
if [ $a -lt $c ]
then
echo "Smaleest among these is $a"
fi
fi
if [ $b -lt $a ]
then
if [ $b -lt $c ]
then
echo "Smallest among these is $b"
fi
fi
if [ $c -lt $b ]
then
if [ $c -lt $a ]
then
echo "Smallest among these is $c"
fi
fi
