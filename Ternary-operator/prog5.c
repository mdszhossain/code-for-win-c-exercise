// Checking a character is a alphabet or not

#include <stdio.h>

int main()
{
    char character;

    printf("Enter character: ");
    scanf("%c", &character);

    ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) ? printf("Alphabet\n") : printf("Not Alphabet\n");

    return 0;
}