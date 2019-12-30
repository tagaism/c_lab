#include <stdio.h>
int main()
{
    int goal, next;
    int first = 1;
    int second = 1;
    

    printf("Enter the value of last number\n");
    scanf("%d", &goal);

    printf("Start calculation:\n");

    do
    {
        next = first + second;
        first = second;
        second = next;
        printf("%d\n", next);

    } while (second < goal);
  return 0;
}