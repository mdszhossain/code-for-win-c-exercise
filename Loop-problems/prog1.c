// writing c program to print first n natural number using while loop

#include <stdio.h>

int main()
{
    int n, i = 1;
    
    printf("Enter n: ");
    scanf("%d", &n);

    while(i <= n) {
        printf("%d ", i);
        i++;
    }

    return 0;
}