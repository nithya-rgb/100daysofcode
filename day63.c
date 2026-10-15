#include <stdio.h>

int main() {
    int arr[100];
    int n, k;
    int temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    // Sort array in ascending order
    for(int i = 0; i < n - 1; i++) {

        for(int j = 0; j < n - i - 1; j++) {

            if(arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Kth smallest element = %d", arr[k - 1]);

    return 0;
}
