#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int leftsum, rightsum;
    int pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {

        leftsum = 0;
        rightsum = 0;


        for(int j = 0; j < i; j++) {
            leftsum = leftsum + arr[j];
        }

    
        for(int j = i + 1; j < n; j++) {
            rightsum = rightsum + arr[j];
        }

    
        if(leftsum == rightsum) {
            pivot = i;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}
