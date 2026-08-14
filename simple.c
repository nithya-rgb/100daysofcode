#include<stdio.h>
#include <math.h>
int main(){
float si, p, t, r, ci;
scanf("%f %f %f" , &p,&r,&t);
si=p*r*t/100;
ci=p*pow(1 + r / 100, t) - p;;
printf("si=%.2f", si);
printf("ci=%.2f", ci);
return 0;
}
~                       
