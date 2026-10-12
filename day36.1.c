#include<stdio.h>
int main(){
int arr[10][10];
int i,j;
printf("enter rows and coulums:");
scanf("%d %d",&i,&j);

printf("enter matrix elements:\n");
for(int n=0;n<i;n++){
for(int k=0;k<j;k++){
scanf("%d",&arr[n][k]);
}
}
printf("the matrix is:\n");
for(int n=0;n<i;n++){
for(int k=0;k<j;k++){
printf("%d",arr[n][k]);
}
printf("\n");
}
return 0;
}
