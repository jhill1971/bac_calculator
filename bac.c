#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define R_MEN 0.73
#define R_WOMEN 0.66

/*
BAC = (A * 5.14/W * r) - .015 * H 

A = the total amount of alcohol consumed, in ounces
W = body weight in pounds
r = the alcohol distribution ratio 0.73 for men, 0.66 for women
H = the number of hours since the last drink
*/


int main() {
    /* Declare Variables  */
    double bac, a, w, r, h;
    int drinks;
    char sex;

    /* Get input from user */
    printf("How many drinks have you had? ");
    scanf("%d", &drinks);
    a = drinks * 0.493835; // calculate ounces of alcohol per drink, on average

    printf("What is your weight in pounds? ");
    scanf("%lf", &w);

    printf("Please enter your sex with either m or f ");
    scanf(" %c", &sex); // added space before %c to consume leftover newline.
    
    if (sex == 'm'){
        r = R_MEN;
    }
    else if (sex == 'f' ){
        r = R_WOMEN;
    }
    else {
        printf("Incorrect input. Please try again.\n");
        return 1;
    }

    printf("How long has it been in hours since your last drink? ");
    scanf("%lf", &h);

    /* Calculation  */
    bac = ((a * 5.14)/(w * r - (0.015 * h)));

    // Outout
    printf("Your BAC is: %.2lf\n", bac);
    if (bac <= 0.04){
        printf("You're okay!\n");
    }
    else if (bac > 0.06 && bac < 0.07){
        printf("Better watch it! Slow down!\n");
    }
    else if (bac > 0.08 && bac < 0.10){
        printf("Now you can't drive, drunky!\n");
    }
    else if (bac > 0.11 && bac < 0.19){
        printf("Greetings comrade Yeltsin!\n");
    }
    else {
        printf("Don't forget to breathe, my child of the Emerald Isle!\n");
    }

    return 0;
}

