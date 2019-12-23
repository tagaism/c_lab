#include<stdio.h>
#include<math.h>

int main()
{
    float x, y, cotan_x;
    printf("Enter the value of x:\n");
    scanf("%f", &x);                                     //read user input

    if (x < 0)                                          // check if user enterd a value less than 0
    {
        printf("The value of x must be more than 0.\n"); // if less than 0 - show error message
        return 0;                                        // and stop the program.
    }
    else
    {
        cotan_x = cos(x)/sin(x);                         // find cotan_x
        y = sqrt((log10(pow(x, 3) + 5))/(cotan_x));      //main calculation
    }
    printf("The result of calculation is: %.4f\n", y);   //show result with 4 digits after point
    return 0;
}