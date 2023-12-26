// Checking the given character is an alphabet or a digit or a special character

#include <stdio.h>

int main()
{
    char character;

    printf("Enter the character: ");
    scanf("%c", &character);

    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        printf("Alphabet\n");
    } else if(character >= '0' && character <= '9') {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }

    return 0;
}