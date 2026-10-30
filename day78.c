#include <stdio.h>

int main() {
    FILE *fp;
    int ch;
    int vowels = 0;
    int consonants = 0;

    fp = fopen("input.txt", "r");

    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {

        if((ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z')) {

            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' ||
               ch == 'O' || ch == 'U') {

                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
