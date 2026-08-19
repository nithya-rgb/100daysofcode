#include<stdio.h>
int main(){
int a,grade;
printf("enter your percentage:");
scanf("%d",&a);
if(a>=90 && a<=100){
printf("grade A");
}
else if(a>=80 && a<=89){
printf("grade B");
}
else if(a>=70 && a<=79){
printf("grade C");
}
else if(a>=60 && a<=69){
printf("grade D");
}
else{
printf("Grade F");
}
return 0;
}
