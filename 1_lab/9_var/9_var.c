#include<stdio.h>
#include<math.h>

int main()
{
    float x, y;
    printf("Enter the value of x:\n");
    scanf("%f", &x);                                   //read user input

    
    y = (1 + sin(sqrt(x + 1)))/(cos(13 * x - 4));      //main calculation
    if (isnan(y))                                      //check if result is undefined
    {
        printf("x's value is improper. Please, enter another one.\n");
        return 0;
    }
        
    printf("The result of calculation is: %.4f\n", y);   //show result with 4 digits after point
    return 0;
}