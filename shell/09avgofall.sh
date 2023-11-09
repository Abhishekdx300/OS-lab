echo "enter n "
read n

i=1
sum=0

while [ $i -le $n ]
do
echo "enter num"
read num

sum=$((sum+num))
	
i=$((i+1))
done

avg=$(echo $sum / $n | bc -l)

#echo $avg
printf '%0.2f' "$avg"
