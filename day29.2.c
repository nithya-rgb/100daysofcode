
#include<stdio.h>
int main(){
int i,max,min,arr[5];
printf("enter 5 elements:");
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];

for(i=1;i<5;i++){
if(arr[i]>max){
max=arr[i];
}
if(arr[i]<min){
min=arr[i];
}
}
printf("max=%d\n",max);
printf("min=%d\n",min);

return 0;
}
