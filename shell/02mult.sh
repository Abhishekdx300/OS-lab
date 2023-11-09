a=10
b=20
#mult=$((a*b))
mult=`expr $a \* $b`
echo $mult
