#include <stdio.h>

int main() {
    int arr[100];
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++) {

        int max = arr[i];

        for(int j = i; j < i + k; j++) {

            if(arr[j] > max) {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}
