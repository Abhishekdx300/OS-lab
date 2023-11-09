echo "enter n "
read n

i=1
max=-1

while [ $i -le $n ]
do
echo "enter num"
read num

if [ $i -eq 1 ]
then 
max=$num
else
	if [ $num -gt $max ]
	then 
	max=$num
	fi
fi	
i=$((i+1))
done

echo $max
