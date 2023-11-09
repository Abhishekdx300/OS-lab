echo "enter"
read a

sum=0

while [ $a -gt 0 ]
do

	#normal

	#mod=$((a%10))
	#sum=$((sum+mod))
	#a=$((a/10))
	
	#using expr
	mod=`expr $a % 10`
	sum=`expr $sum + $mod`
	a=`expr $a / 10`
done

echo $sum
