#include<stdio.h>
#include<math.h>

int main()
{
    float x, y, cotan_x;
    printf("Enter the value of x:\n");
    scanf("%f", &x);                                      //read user input

    cotan_x = cos(x)/sin(x);                              // find cotan_x
    y = (3 + exp(x - 1))/(pow(x, 2) + fabs(1 - cotan_x)); //main calculation
    printf("The result of calculation is: %.4f\n", y);    //show result with 4 digits after point
    return 0;
}