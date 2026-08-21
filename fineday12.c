#include<stdio.h>
int main(){
int days, fine;
printf("enter the number of late days:");
scanf("%d",&days);
if(days<=5){
fine=days*2;
printf("fine=%d",fine);
}
else if(days<=10){
fine=(5*2)+((days-5)*4);
printf("fine=%d/n",fine);
}
else if(days<=20){
fine=(5*2)+(5*4)+((days-10)*6);
printf("%d=fine",fine);
}
else{
printf("membership cancelled/n");
}
return 0;
}
