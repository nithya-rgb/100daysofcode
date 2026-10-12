#include<stdio.h>
int main(){
int arr[10][10];
int i,j;
int sum=0;

printf("enter rows and coulums:");
scanf("%d %d",&i,&j);

printf("enter matrix elements:\n");
for(int n=0;n<i;n++){
for(int k=0;k<j;k++){
scanf("%d",&arr[n][k]);
}
}
for(int n=0;n<i;n++){
for(int k=0;k<j;k++){
sum=sum+arr[n][k];
printf("%d",sum);
}
}
return 0;
}
