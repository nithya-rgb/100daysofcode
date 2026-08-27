#include<stdio.h>
int main(){
int a,original,rem, rev=0;
printf("enter a number:");
scanf("%d",&a);
original=a;
while(a!=0){
rem=a%10;
rev=rev*10+rem;
a=a/10;
}
if(original==rev){
printf("number is palindrome");
}
else{
printf("number is not palindrome");
}
return 0;
}

