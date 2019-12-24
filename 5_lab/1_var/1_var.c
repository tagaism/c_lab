#include<stdio.h>
#include<math.h>

int main()
{
    float user_number;
    double sum = 1.0;

    printf("Enter given number: ");
    scanf("%f", &user_number);

    printf("User entered: %.4f\n", user_number);
    
    for (int i = 1; sum <= user_number; i++)
    {
        sum += (1.0/i);
    }
    
    printf("Result is: %f\n", sum);
    return 0;
}