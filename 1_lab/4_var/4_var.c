#include<stdio.h>
#include<math.h>

int main()
{
    float x, y;
    printf("Enter the value of x:\n");
    scanf("%f", &x);                                     //read user input

    y = (fabs(x) + 2 * tan(x))/(5.78 * exp(x - 1));      //main calculation
    printf("The result of calculation is: %.4f\n", y);   //show result with 4 digits after point
    return 0;
}