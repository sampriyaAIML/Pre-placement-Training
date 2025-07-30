#include <stdio.h> 
#include <string.h>
int isPalindrome(char str[]) {
    int length = strlen(str);
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }
    char strWithSpace[100];
    printf("\nEnter another string (can have spaces): ");
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    fgets(strWithSpace, sizeof(strWithSpace), stdin);
    strWithSpace[strcspn(strWithSpace, "\n")] = 0; 

    if (isPalindrome(strWithSpace)) {
        printf("'%s' is a palindrome.\n", strWithSpace);
    } else {
        printf("'%s' is not a palindrome.\n", strWithSpace);
    }

    return 0;
}
