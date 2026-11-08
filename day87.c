#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    int choice;

    printf("1. Admin\n");
    printf("2. User\n");
    printf("3. Guest\n");

    printf("Enter your role: ");
    scanf("%d", &choice);

    switch(choice) {

        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;

        case USER:
            printf("Welcome User! You have limited access.");
            break;

        case GUEST:
            printf("Welcome Guest! You have view-only access.");
            break;

        default:
            printf("Invalid role.");
    }

    return 0;
}
