// Counting total number of notes in a given amount

#include <stdio.h>

int main()
{
    int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;
    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

    printf("Enter amount: ");
    scanf("%d", &amount);

    if(amount >= 500) {
        note500 = amount / 500;
        amount -= note500 * 500;
    }
    if(amount >= 100) {
        note100 = amount / 100;
        amount -= note100 * 100;
    }
    if(amount >= 50) {
        note50 = amount / 50;
        amount -= note50 * 50;
    }
    if(amount >= 20) {
        note20 = amount / 20;
        amount -= note20 * 20;
    }
    if(amount >= 10) {
        note10 = amount / 10;
        amount -= note10 * 10;
    }
    if(amount >= 5) {
        note5 = amount / 5;
        amount -= note5 * 5;
    }
    if(amount >= 2) {
        note2 = amount / 2;
        amount -= note100 * 2;
    }
    if(amount >= 1) {
        note1 = amount;
    }

    printf("Note 500 : %d\n", note500);
    printf("Note 100 : %d\n", note100);
    printf("Note 50 : %d\n", note50);
    printf("Note 20 : %d\n", note20);
    printf("Note 10 : %d\n", note10);
    printf("Note 5 : %d\n", note5);
    printf("Note 2 : %d\n", note2);
    printf("Note 1 : %d\n", note1);

    return 0;
}