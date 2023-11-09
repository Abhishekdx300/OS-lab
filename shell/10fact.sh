echo "enter num"
read n
fact=1

/'
while [ $n -gt 1 ]
do
fact=$((fact*n))
n=$((n-1))
done
'

for((i=2;i<=n;i++))
{
	fact=$((fact*i))
}

echo $fact
