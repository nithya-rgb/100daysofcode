#include<stdio.h>
int main(){
int i, arr1[3],arr2[2],arr3[5];
printf("enter 3 numbers from first array:");
for(i=0;i<3;i++){
scanf("%d",&arr1[i]);
}
printf("enter 2 numbers from 2 array:");
for(i=0;i<2;i++){
scanf("%d",&arr2[i]);
}
for(i=0;i<3;i++){
arr3[i]=arr1[i];
}
for(i=0;i<2;i++){
arr3[i+3]=arr2[i];
}
printf("merged array:\n");
for(i=0;i<5;i++){
printf("%d",arr3[i]);
}
return 0;
}
