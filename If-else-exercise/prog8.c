// Checking a given alphabet is vowel or consonant

#include <stdio.h>

int main()
{
    char alphabet;

    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u') {
        printf("Vowel\n");
    } else if(alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}