#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char str1Lower[100], str1Upper[100], str1Reversed[100];
    char str2Lower[100], str2Upper[100], str2Reversed[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    // Length of strings
    printf("Length of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));

    // Copy strings
    strcpy(str1Lower, str1);
    strcpy(str1Upper, str1);
    strcpy(str2Lower, str2);
    strcpy(str2Upper, str2);

    // Convert to lower and upper case
    strlwr(str1Lower);
    strupr(str1Upper);
    strlwr(str2Lower);
    strupr(str2Upper);

    // Reverse strings
    strcpy(str1Reversed, str1);
    strcpy(str2Reversed, str2);
    strrev(str1Reversed);
    strrev(str2Reversed);

    // Display results
    printf("First string in lower case: %s\n", str1Lower);
    printf("Second string in lower case: %s\n", str2Lower);
    printf("First string in upper case: %s\n", str1Upper);
    printf("Second string in upper case: %s\n", str2Upper);
    printf("First string reversed: %s\n", str1Reversed);
    printf("Second string reversed: %s\n", str2Reversed);
    
    

    // Compare strings
    int cmpResult = strcmp(str1, str2);
    if (cmpResult == 0) {
        printf("Both strings are equal.\n");
    } else if (cmpResult < 0) {
        printf("First string is less than second string.\n");
    } else {
        printf("First string is greater than second string.\n");
    }

    return 0;
}

