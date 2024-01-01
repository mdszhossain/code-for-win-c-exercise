// print 1 - n natural numbers in reverse order

#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int i = n;

    while(i >= 1) {
        printf("%d ", i);
        i--;
    }

    return 0;
}