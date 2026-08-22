#include<stdio.h>
int main(){
int a,b;
char op;
printf("enter two numbers:");

scanf("%d %d",&a,&b);
printf("enter operator (+,-,*,/,%%):");
scanf(" %c",&op);
switch(op){
case'+':
printf("sum=%d",a+b);
break;
case '-':
printf("difference=%d",a-b);
break;
case '*':
printf("product=%d",a*b);
break;
case '/':
if(b!=0)
printf("quotient=%d",a/b);
else
printf("cannot be divided by zero");
break;
case '%':
if(b!=0)
printf("remainder=%d",a%b);
else
printf("cannot divide by zero");
break;

default:
printf("invalid operator");
 }
return 0;
}
