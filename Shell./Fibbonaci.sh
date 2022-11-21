echo enter the number
read n
a=-1
b=1
i=0
while [ $i –le $n ]
do
t=`expr $a + $b`
echo $t
a=$b
b=$t
i=`expr $i + 1
done
