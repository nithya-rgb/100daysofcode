#include <stdio.h>

int main() {
    FILE *source;
    FILE *destination;

    char sourceName[100];
    char destinationName[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", sourceName);

    printf("Enter destination filename: ");
    scanf("%99s", destinationName);

    // Open source file in read mode
    source = fopen(sourceName, "r");

    if(source == NULL) {
        printf("Source file could not be opened.\n");
        return 1;
    }

    destination = fopen(destinationName, "w");

    if(destination == NULL) {
        printf("Destination file could not be opened.\n");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}
