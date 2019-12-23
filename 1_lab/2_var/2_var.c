#include<stdio.h>
#include<math.h>

int main()
{
    float x, y;
    printf("Enter the value of x:\n");
    scanf("%f", &x);                                     //read user input

    if (x < 0)                                           // check if user enterd a negative value
    {
        printf("The value can't be negative.\n");        // if negative show error message
        return 0;                                        // and stop the program.
    }
    else
    {
        y = cos((3.2 + sqrt(1 + x))/(fabs(5 * x)));      //main calculation
    }
    printf("The result of calculation is: %.4f\n", y);   //show result with 4 digits after point
    return 0;
}