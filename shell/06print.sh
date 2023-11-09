

#using while loop
/'
i=1

while [ $i -le 100 ]
do
echo $i
#echo $'\n'
i=$((i+1))
done
'
#using for loop
for((i=1;i<=100;i++))
do
echo $i
done
