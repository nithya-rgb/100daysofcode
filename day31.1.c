#include<stdio.h>
int main(){
int i,arr[5],search,foun=0;
printf("enter the 5 numbers:\n");
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
}
printf("enter the number to search for:");
scanf("%d",&search);
for(i=0;i<5;i++){
if(search==arr[i]){
found=1;
break;
}
if(found==1){
printf("number is at %dth position",i+1);
}
else{
printf("not found");
}
return 0;
}
