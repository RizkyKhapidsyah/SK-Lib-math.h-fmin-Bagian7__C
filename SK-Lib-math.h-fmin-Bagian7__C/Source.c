#include <stdio.h>
#include <math.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    printf("fmin(2,1)    = %f\n", fmin(2, 1));
    printf("fmin(-Inf,0) = %f\n", fmin(-INFINITY, 0));
    printf("fmin(NaN,-1) = %f\n", fmin(NAN, -1));

    _getch();
    return 0;
}