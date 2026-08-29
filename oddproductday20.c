#include<stdio.h>
int main(){
int i,a,rem,product=1;
printf("enter a number:");
scanf("%d",&a);
while(a!=0){
rem=a%10;
if(rem%2!=0){
product=product*rem;
}
a=a/10;
}
printf("product of odd digits=%d",product);
return 0;
}
