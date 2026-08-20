#include<stdio.h>
int main(){
float cp,sp, percentage;
printf("enter cost_price:");
scanf("%f", &cp);
printf("enter selling_price");
scanf("%f",&sp);
if (sp>cp){
percentage=((sp-cp)/cp)*100;
printf("profit=%.2f%%",percentage);
}
else if(cp>sp){
percentage=((cp-sp)/cp)*100;
printf("loss=%.2f%%",percentage);
}
else{
printf("no profit/loss");
}
return 0;
}
