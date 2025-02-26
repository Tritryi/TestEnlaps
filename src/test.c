#include <stdio.h>
#include "calc.h"
#include <stdlib.h>
#include <assert.h>

void run_tests()
{
    //Tests of the add function
    assert(add(1,2) == 3);
    assert(add(1,-1) == 0);
    printf("\033[32mTests of add passed ✔\033[0m\n");
    
    //Tests of the subtract function
    assert(subtract(3,2) == 1);
    assert(subtract(2,3) == -1);
    printf("\033[32mTests of subtract passed ✔\033[0m\n");

    //Tests of the multiply function
    assert(multiply(3,2) == 6);
    assert(multiply(3,-2) == -6);
    printf("\033[32mTests of multiply passed ✔\033[0m\n");

    //Tests of the divide function
    assert(divide(10,2) == 5);
    assert(divide(10,-2) == -5);
    assert(divide(10,0) == 0);
    printf("\033[32mTests of divide passed ✔\033[0m\n");

}

int main()
{
    run_tests();
    return EXIT_SUCCESS;
}
