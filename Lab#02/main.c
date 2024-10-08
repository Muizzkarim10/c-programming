#include <stdio.h>

int main(){
    int amount, n500, n100, n50, n20, n10;

    printf("Enter the amount of money: ");
    scanf("%d", &amount);

    n500 = amount/500;
    amount = amount % 500;

    n100 = amount/100;
    amount = amount % 100;

    n50 = amount/50;
    amount = amount % 50;

    n20 = amount/20;
    amount = amount % 20;

    n10 = amount/10;
    amount = amount % 10;

    printf("You have %d 500 notes, %d 100 notes, %d 50 notes, %d 20 notes and %d 10 notes.", n500, n100, n50, n20, n10);

    return 0;
}