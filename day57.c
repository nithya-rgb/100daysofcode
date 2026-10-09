#include <stdio.h>

int main() {
    int nums[100];
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < n; i++) {

        int nextgreater = -1;

        for(int j = i + 1; j < n; j++) {

            if(nums[j] > nums[i]) {
                nextgreater = nums[j];
                break;
            }
        }

        printf("%d", nextgreater);

        if(i < n - 1) {
            printf(",");
        }
    }

    return 0;
}
