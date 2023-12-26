// Checking an alphabet is uppercase or lower case

#include <stdio.h>

int main()
{
    char alphabet;

    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    if(alphabet >= 'a' && alphabet <= 'z') {
        printf("Lower Case\n");
    } else if(alphabet >= 'A' && alphabet <= 'Z') {
        printf("Upper Case\n");
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}