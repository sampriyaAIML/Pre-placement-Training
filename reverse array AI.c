#include <stdio.h>  
#include <string.h> 
void reverseString(char str[]) {
    int length = strlen(str);
    int i = 0;               
    int j = length - 1;      
    char temp;               
    while (i < j) {
        
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        
        i++;
        j--;
    }
}

int main() {
    char myString[100]; 

    printf("Enter a string: ");
    
    
    scanf("%s", myString);

    printf("Original string: %s\n", myString);

    reverseString(myString); 

    printf("Reversed string: %s\n", myString);

    char anotherString[100];
    printf("\nEnter another string (can have spaces): ");

    int c;
    while ((c = getchar()) != '\n' && c != EOF); 
    
    fgets(anotherString, sizeof(anotherString), stdin);
    
    anotherString[strcspn(anotherString, "\n")] = 0; 

    printf("Original string: %s\n", anotherString);
    reverseString(anotherString);
    printf("Reversed string: %s\n", anotherString);

    return 0; 
}
