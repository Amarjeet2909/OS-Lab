echo 1.Addition
echo 2.Subraction
echo 3.Multiplication
echo 4.Division
echo enter your choice
read a
echo enter the value of b
read b
echo enter the value of c
read c
echo b is $b c is $c
case $a in
1)d=`expr $b + $c`
echo the sum is $d
;;
2)d=`expr $b - $c`
echo the difference is $d
;;
3)d=`expr $b \* $c`
echo the product is $d
;;
4)d=`expr $b / $c`
echo the quotient is $d
;;
esac