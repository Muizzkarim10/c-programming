#include <stdio.h>

void primeNumber(int n, int primes[])
{
    primes[0] = 2;
    int total_primes = 1;

    int number = 3;
    int isDivisible = 0;

    while (total_primes < n)
    {
        int isPrime = 1;
        int square_root = sqrt(number);

        for (int i = 0; primes[i] <= square_root; i++)
        {
            if (number % primes[i] == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            primes[total_primes] = number;
            total_primes++;
        }
        number += 2;
    }
}

int main(){
    printf("How many prime numbers would you like to generate: \n> ");
    int n;
}
