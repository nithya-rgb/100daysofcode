#include <stdio.h>

int main() {
    int nums[100];
    int answer[100];
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < n; i++) {

        int product = 1;

        for(int j = 0; j < n; j++) {

            if(i != j) {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    printf("Answer: ");

    for(int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}
