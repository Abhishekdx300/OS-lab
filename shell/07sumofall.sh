echo "enter"
read a

sum=0

while [ $a -gt 0 ]
do
	#mod=$((a%10))
	#sum=$((sum+mod))
	#a=$((a/10))
	
	mod=`expr $a % 10`
	sum=`expr $sum + $mod`
	a=`expr $a / 10`
done

echo $sum
