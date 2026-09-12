#include<stdio.h>
int main(){
int i,j,arr[5],even=0,odd=0;
printf("enter 5 elements:");
scanf("%d",&arr[i]);
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<5;i++){
if(arr[i]%2==0){
even++;
}
else{
odd++;
}
}
printf("odd numbers=%d",odd);
printf("even numbers=%d",even);
return 0;
}
