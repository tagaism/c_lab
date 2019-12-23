#include<stdio.h>
#include<math.h>

int main()
{
    float x, y, cotan_x;
    printf("Enter the value of x:\n");
    scanf("%f", &x);                                     //read user input

    if (x <= 0)                                          // check if user enterd a value less than 0
    cotan_x = cos(pow(x, 2) + 2)/sin(pow(x, 2) + 2);     //find contan(pow(x, 2) + 2)
    y = (cotan_x + exp(pow(x, 2) - 8))/sin(x);           //main calculation
    printf("The result of calculation is: %.4f\n", y);   //show result with 4 digits after point
    return 0;
}