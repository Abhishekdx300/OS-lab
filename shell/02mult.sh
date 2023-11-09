a=10
b=20

#mult=$((a*b))

#using expr
mult=`expr $a \* $b`

echo $mult
