echo "enter num"
read n
fact=1

#using while
/'
while [ $n -gt 1 ]
do
fact=$((fact*n))
n=$((n-1))
done
'

#using for
for((i=2;i<=n;i++))
{
	fact=$((fact*i))
}

echo $fact
