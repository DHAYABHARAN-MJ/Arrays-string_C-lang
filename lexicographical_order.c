#include <stdio.h>

int main() {
    char str[1000], str1[1000];
    
    // Read the strings
    fgets(str, 1000, stdin);
    fgets(str1, 1000, stdin);
    
    int i = 0;

    // Compare strings lexicographically
    while (str[i] != '\0' && str1[i] != '\0') {
        if (str[i] < str1[i]) {
            printf("%s%s", str, str1);
            return 0;
        } else if (str[i] > str1[i]) {
            printf("%s%s", str1, str);
            return 0;
        }
        i++;
    }

    // If one string is a prefix of the other
    if (str[i] == '\0' && str1[i] != '\0') {
        printf("%s%s", str, str1);
    } else if (str1[i] == '\0' && str[i] != '\0') {
        printf("%s%s", str1, str);
    } else { // If both strings are equal
        printf("%s%s", str, str1);
    }

    return 0;
}
