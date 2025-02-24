#include <stdio.h>
#include "calc.h"
#include <stdlib.h>
#include <assert.h>

void run_tests()
{
    //Tests of the add function
    assert(add(1,2) == 3);
    assert(add(1,-1) == 0);
    
    //Tests of the subtract function
    assert(subtract(3,2) == 1);
    assert(subtract(2,3) == -1);

    //Tests of the multiply function
    assert(multiply(3,2) == 6);
    assert(multiply(3,-2) == -6);

    //Tests of the divide function
    assert(divide(10,2) == 5);
    assert(divide(10,-2) == -5);
    assert(divide(10,0) == 0);

}

int main()
{
    run_tests();
    printf("\033[0;31m");
    printf("Tous les tests sont passés \n");
    printf("\033[0m");
    return EXIT_SUCCESS;
}
