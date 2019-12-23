#include<stdio.h>
#include<math.h>

int main()
{
    float x, y;
    printf("Enter the value of x:\n");
    scanf("%f", &x);                                      //read user input

    y = tan(sqrt(exp(x + 2)))/(sin(7.0 + x/4.0 - 0.001)); //main calculation
        
    printf("The result of calculation is: %.4f\n", y);    //show result with 4 digits after point
    return 0;
}