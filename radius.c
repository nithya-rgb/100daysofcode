#include<stdio.h>
int main(){
float area,radius,circumference;
float pi=3.14;
 
printf("enter radius:");
scanf("%f", &radius);
area = pi*radius*radius;
circumference = 2*pi*radius;
printf("area=%.2f\n", area);
printf("circumference=%.2f\n" , circumference);
return 0;
}
