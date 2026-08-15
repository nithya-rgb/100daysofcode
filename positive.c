#include<stdio.h>
int main(){
int a;
printf("%d", &a);
if (a>0){
printf("positive");
}
if(a==0){
printf("zero");
}
else{
printf("negative");
}
return 0;
}
