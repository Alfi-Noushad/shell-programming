echo "Enter 2 no.s :";
read a
read b
echo "enter the choice 1.Addition 2.Subtraction 3.Multiplication 4.division";
read ch
case $ch in 
1) let "r=a+b"
   echo "The result is : $r"
   ;; 
2) let "r=a-b"
   echo "The result is : $r"
   ;;
3) let "r=a*b"
   echo "The result is : $r"
   ;;
4) let "r=a/b"
   echo "The result is : $r"
   ;;
*) "wrong choice"
   ;;
esac
  
