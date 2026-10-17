#include <stdio.h>

int main() {
    char s[100], t[100];
    int freq[26] = {0};
    int flag = 1;

    printf("Enter first string: ");
    scanf("%99s", s);

    printf("Enter second string: ");
    scanf("%99s", t);

    // Add frequency of characters in s
    for(int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    // Subtract frequency of characters in t
    for(int i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;
    }

    // Check whether all frequencies are 0
    for(int i = 0; i < 26; i++) {

        if(freq[i] != 0) {
            flag = 0;
            break;
        }
    }

    if(flag == 1) {
        printf("Anagram");
    }
    else {
        printf("Not Anagram");
    }

    return 0;
}
