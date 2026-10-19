#include <stdio.h>

int main() {
    int a[100], b[100], merged[200];
    int m, n;
    int i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter elements of first sorted array: ");
    for(int x = 0; x < m; x++) {
        scanf("%d", &a[x]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter elements of second sorted array: ");
    for(int x = 0; x < n; x++) {
        scanf("%d", &b[x]);
    }

    // Compare elements of both arrays
    while(i < m && j < n) {

        if(a[i] < b[j]) {
            merged[k] = a[i];
            i++;
        }
        else {
            merged[k] = b[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements of first array
    while(i < m) {
        merged[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while(j < n) {
        merged[k] = b[j];
        j++;
        k++;
    }

    printf("Merged array: ");

    for(int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}
