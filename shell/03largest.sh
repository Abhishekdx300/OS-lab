echo "enter first"
read a
echo "enter sec"
read b
echo "enter third"
read c

if [ $a -gt $b ] && [ $a -gt $c ]
then 
echo $a
elif [ $b -gt $a ] && [ $b -gt $c ]
then
echo $b
else
echo $c
fi
