echo "enter num"
read n

if [ $n -gt 0 ]
then 
echo "pos"
elif [ $n -lt 0 ]
then 
echo "neg"
else
echo "zero"
fi
