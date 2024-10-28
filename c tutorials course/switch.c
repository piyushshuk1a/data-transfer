#include<stdio.h>
#include<math.h>
int main(){
 char operator;
 int a, b, sum, sub, multi;
 double div;
printf("Enter the sign of opreation you want to do : ");
scanf("%c",&operator);
printf("Enter the two oprands : ");
scanf("%d %d", &a, &b);


 switch (operator)
 
 {
 case '+' :
     
     sum = a+b;
     printf("sumission is :%d ", sum);
     break;
 case '-' :
    sub = a-b;
    printf("substraction is : %d", sub);
    break;

    case '*' : 
    multi = a*b;
    printf("Multiplication is : %d", multi);
    break;

    case '/' :
    div = a/b;
    printf("division is : %lf", div);
    break;  

 default:
 printf("\n\n***Backchodi mt kr laude***\n\n");
     break;
return 0;
}
}




