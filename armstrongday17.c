#include<stdio.h>
#include<math.h>
int main(){
int N,num,r;
int c=0;
int sum=0;
printf("enter a number:");
scanf("%d",&N);
num=N;
while(N!=0){
c++;
N=N/10;
}
while(N!=0){
r=N%10;
sum=sum+pow(r,c);
N=N/10;
}
if(sum==N){
printf("number is an armstrong number");
}
else{
printf("its not an armstrong number");
}
return 0;
}
