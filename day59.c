#include <stdio.h>

int main() {
    int arr[100];
    int n, k;
    int maxSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++) {

        int sum = 0;

        for(int j = i; j < i + k; j++) {
            sum = sum + arr[j];
        }

        if(i == 0 || sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d", maxSum);

    return 0;
}
