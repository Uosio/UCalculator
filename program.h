#include "math.h"
#include <stdbool.h>

bool restart = false;
bool *pRestart = &restart;

char input;
char *pInput = &input;

void run(){
    printf("\n\nWELCOME TO UOSIO CALCULATOR!\n");

    printf("\nPlease enter first number: ");
    scanf("%f", pX);

    printf("\nPlease enter second number: ");
    scanf("%f", pY);

    printf("\nPlease enter the action [+, -, *, / ]: ");
    scanf(" %c", pOp);

    printf("\nYour resoult: %.2f\n", check(pOp));

    printf("\nDo you want to restart the calculator? [y/n]");

    scanf(" %c", pInput);

    if(*pInput == 'y'){
        *pRestart = true;
    }else{
        *pRestart = false;
    }
}
