#include <stdio.h>

int main() {
    int arr[100];
    int freq[1000] = {0};
    int n;
    int repeated = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(freq[arr[i]] == 1) {
            repeated = arr[i];
        }
        else {
            freq[arr[i]] = 1;
        }
    }

    printf("Repeated element = %d", repeated);

    return 0;
}
