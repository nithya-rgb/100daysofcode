#include <stdio.h>

int main() {
    char s[100];
    int maxLength = 0;

    printf("Enter a string: ");
    scanf("%99s", s);

    for(int i = 0; s[i] != '\0'; i++) {

        int freq[256] = {0};
        int length = 0;

        for(int j = i; s[j] != '\0'; j++) {

            if(freq[(unsigned char)s[j]] == 1) {
                break;
            }

            freq[(unsigned char)s[j]] = 1;
            length++;
        }

        if(length > maxLength) {
            maxLength = length;
        }
    }

    printf("Length = %d", maxLength);

    return 0;
}
