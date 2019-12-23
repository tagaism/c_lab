#include<stdio.h>
#include<math.h>

int main()
{
    float x, y;
    printf("Enter the value of x:\n");
    scanf("%f", &x);
    y = sqrt((2 * x + sin(fabs(3 * x)))/3.56); // The main calculation
    printf("The result of calculation is: %.4f\n", y);
    return 0;
}