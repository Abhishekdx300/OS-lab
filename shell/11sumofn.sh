echo "enter n"
read n
i=1
sum=0

echo "enter num"

/'
while [ $i -le $n ]
do
read num
sum=$((sum+num))
i=$((i+1))
done
'
for((i=1;i<=n;i++))
do
read num
sum=$((sum+num))
done


echo $sum
