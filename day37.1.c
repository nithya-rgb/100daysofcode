#include <stdio.h>
int main() {
int rows, cols;
int a[10][10];
int sum[10];
scanf("%d %d", &rows, &cols);
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
scanf("%d", &a[i][j]);
}
for (int i = 0; i < rows; i++) {
sum[i] = 0;
for (int j = 0; j < cols; j++) {
sum[i] = sum[i] + a[i][j];
}
}
for (int i = 0; i < rows; i++) {
printf("%d ", sum[i]);
}
return 0;
}
