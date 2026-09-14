#include<stdio.h>
int main(){
int i,arr[5];
printf("enter 5 numbers:");
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
}
printf("the numbers are:\n");
for(i=0;i<5;i++){
printf("%d",arr[i]);
}
return 0;
}
