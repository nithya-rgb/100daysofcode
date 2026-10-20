#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int actualSum = 0;
    int expectedSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        actualSum = actualSum + arr[i];
    }

    expectedSum = n * (n + 1) / 2;

    int missing = expectedSum - actualSum;

    printf("Missing number = %d", missing);

    return 0;
}
