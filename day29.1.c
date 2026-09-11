#include<stdio.h>
int main(){
int i,arr[5],sum=0;
printf("enter 5 numbers:");
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
}
printf("the numbers are:\n");
for(i=0;i<5;i++){
sum=sum+arr[i];
printf("%d\n",arr[i]);
}
printf("sum=%d\n",sum);
return 0;
}
