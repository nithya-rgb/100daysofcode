#include <stdio.h>

int main() {
    FILE *input;
    FILE *output;
    int ch;

    input = fopen("input.txt", "r");

    if(input == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }

    output = fopen("output.txt", "w");

    if(output == NULL) {
        printf("Error opening output.txt\n");
        fclose(input);
        return 1;
    }

    while((ch = fgetc(input)) != EOF) {
        if(ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }

        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("Text converted to uppercase successfully.\n");

    return 0;
}
