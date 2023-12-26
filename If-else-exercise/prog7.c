// Checking a given character is alphabet or not

#include <stdio.h>

int main()
{
    char character;

    printf("Enter character: ");
    scanf("%c", &character);

    if(character >= 'a' && character <= 'z') {
        printf("Aplhabet\n");
    } else if(character >= 'A' && character <= 'Z') {
        printf("Alphabet\n");
    } else {
        printf("Normal Character\n");
    }

    return 0;
}