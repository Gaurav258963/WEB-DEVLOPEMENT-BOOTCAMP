#include <stdio.h>
int main()
{
    // int x;
    // printf("Enter The Number\n");
    // scanf("%d", &x);
    // if (x >= 0)
    //     printf("%d", x);
    // if (x < 0)
    // {
    //     x = x * (-1);
    //     printf("Absolute Value is:\n%d", x);
    // }
    int x;
    printf("Enter The Number :\n");
    scanf("%d" ,&x);
    if (x<0) x = x*(-1);
    printf("Absolute Value Is %d",x);
    return 0;
}
