#include <stdio.h>

int main() {
    int arr[100], n, element, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to delete: ");
    scanf("%d", &element);

    pos = -1;

    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            pos = i;
            break;
        }
    }


    if(pos == -1) {
        printf("Element not found");
    }
    else {

        for(i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
