#include<stdio.h>
int main(){
float length, breadth, area, perimeter;

  int a;
printf("enter length:");
scanf("%f", &length);
printf("enter breadth:");
scanf("%f", &breadth);
area = length*breadth;
perimeter = 2*(length+breadth);
printf("area=%.2f\n", area);
printf("perimeter=%.2f\n" , perimeter);
return 0;
}
  
