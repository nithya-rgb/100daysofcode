#include <stdio.h>

int main() {
    int n;
    int pivot = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int x = 1; x <= n; x++) {

        int leftsum = 0;
        int rightsum = 0;

        // Sum from 1 to x
        for(int i = 1; i <= x; i++) {
            leftsum = leftsum + i;
        }

        // Sum from x to n
        for(int i = x; i <= n; i++) {
            rightsum = rightsum + i;
        }

        if(leftsum == rightsum) {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}
