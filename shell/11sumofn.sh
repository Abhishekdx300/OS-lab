echo "enter n"
read n
i=1
sum=0

echo "enter num"

#using while
/'
while [ $i -le $n ]
do
read num
sum=$((sum+num))
i=$((i+1))
done
'

#using for
for((i=1;i<=n;i++))
do
read num
sum=$((sum+num))
done


echo $sum
