#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");

    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a new line of text: ");
    scanf(" %199[^\n]", text);

    fprintf(fp, "%s\n", text);

    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}
