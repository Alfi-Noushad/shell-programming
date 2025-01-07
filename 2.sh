: <<'END'
echo "he" 
read a 
echo "the value is" $a

var="helo nano mithran"
echo $var

read -p "Enter two no.s" a b
echo $a 
echo $b 

fruit=(orange mango banana)
echo ${fruit[0]}
echo ${fruit[1]}
echo ${fruit[2]}
echo ${fruit[*]}

x=20
y=20
res=` expr $x = $y`
echo $res

x=10
y=20
res=` expr $x = $y`
echo $res

x=10					
y=20
res=` expr $x \< $y`
echo $res

x=10
y=20
res=` expr $x \> $y`
echo $res

x=20
y=20
res=` expr $x \!= $y`
echo $res

read a                  
read b               
let c=$a+$b        
echo $c

read a
read b
let c=$a-$b
echo $c

read a                  read a
read b                  read b
let c=$a*$b             let c=$a*$b
echo $c                 echo $c

x=abcd
length=` expr length $x`
echo $length


read a
read b
if [ $a -eq $b ]
then
echo "a is equal to b"
elif [ $a -gt $b ]
then
echo "$a is greater"
elif [ $a -lt $b ]
then
echo "$a is lesser"
fi


counter=0
while [ $counter -lt 10 ]
do
echo "the counter is $counter"
let counter=counter+1
done

for i in 7 9 2
do 
echo "$i"
done

echo "Enter the number"
read n
for (( i=1;i<=$n;i++ ))
do 
echo "Vaue of i is $i"
done


FRUIT=(kiwi)
case "$FRUIT" in
"apple")
echo "i like apple"
;;
"banana")
echo "i like banana not apple"
;;
"kiwi")
echo "i like kiwi not apple"
;;
esac 






#-----------------------ODD.......EVEN---

echo "Enter the no"
read n
if [ `expr $n % 2` -eq 0 ]
then
echo "Number is even"
else
echo "number is odd"
fi


-------------------------GREATEST OF NUMBERS----

echo "Enter the 2 value"
read a
read b
if [ $a \> $b ]
then
echo "A is greater"
else
echo "B is greater"
fi


-------------------------FACTORIAL OF NUMBERS----

echo "enter the value"
read n
fact=1
for (( i=1;i<=$n;i++ ))
do
let fact=$fact*$i
done
echo "the factorial of given number is  $fact"


------------------------PATTTERN----

rows=4
for (( i=1;i<=rows;i++ ))
do
for (( j=1;j<=i;j++ ))
do
echo -n " *"
done
echo ""
done


END

