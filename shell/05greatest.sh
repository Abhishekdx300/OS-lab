echo "first"
read a
echo "sec"
read b

if [ $a -gt $b ]
then
echo $a
else 
echo $b
fi
