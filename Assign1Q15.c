#include <stdio.h>
#include <ctype.h> 

int main() {
    char input[100] =  "Welcome to SunBeam";
    int alphabet_counts[26] = {0}; 

    for (int i = 0; input[i]; i++) {
        input[i] = tolower(input[i]);
    }

    for (int i = 0; input[i]; i++) {
        if (isalpha(input[i])) { 
            int index = input[i] - 'a'; 
            alphabet_counts[index]++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (alphabet_counts[i] > 0) {
            printf("%c : %d\n", 'A' + i, alphabet_counts[i]);
        }
    }

    return 0;
}