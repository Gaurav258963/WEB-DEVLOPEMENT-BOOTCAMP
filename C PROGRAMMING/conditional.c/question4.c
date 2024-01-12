#include <stdio.h>
int main()
{

    int a;

    printf("Enter the Value a:\n");
    scanf("%d", &a);

    if (a % 5 == 0)
        printf("The number Is Divisible By 5:\n");
    else
        printf("The Number is Not Divisible by 5\n");
    if (a % 3 == 0)
        printf("The Number Is Divisible By 3:\n");
    else
        printf("The Number is Not Divisible by 3\n");
    if (a % 15 == 0)
        printf("The Number Is Divisible by 15:\n");
    else
        printf("The Number is Not Divisible by 15\n");
    return 0;
}
