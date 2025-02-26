#include "calc.h"
#include <stdio.h>

// Implémentation des fonctions
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b == 0)
    {
        printf("\033[31mErreur : Division par zéro\033[0m\n");
        return 0;
    }
    return a / b;
}
