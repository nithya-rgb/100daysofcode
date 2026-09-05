#include <stdio.h>

int main() {
int n, temp, first, last, power = 1;
 printf("Enter a number: ");
scanf("%d", &n);
temp = n;
while (temp >= 10) {
temp = temp / 10;
power = power * 10;
}
 first = temp;
last = n % 10;
n = n - first * power;
n = n - last;
n = n + last * power;
n = n + first;
printf("Number after swapping = %d", n);
return 0;
}
