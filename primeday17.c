#include<stdio.h>
int main(){
int a,i,Q=0;
printf("enter a number:");
scanf("%d",&a);
if(a<=1){
printf("number is not prime");
}
else{
for(i=2;i<a;i++){
if(a%i==0){
Q=1;
break;
}
}
}
 if(Q==0){
printf("number is prime");
}
else{
printf("number is not prime");
}
return 0;
}
