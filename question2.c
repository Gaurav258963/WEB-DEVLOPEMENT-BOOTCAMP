#include<stdio.h>
int main()
{
    int x;
    int y;
    int z;

    printf("Enter The Positive Number x:\n");
    scanf("%d", &x);
    printf("Enter The Positive Number y:\n");
    scanf("%d", &y);
    printf("Enter The Positive Number z:\n");
    scanf("%d", &z);

    if (x > y)
    {
        if (x > z)
            printf("%d greatest:\n", x);
        else
            printf("%d is greatest", z);
    }
    else
    {
        if (y > z)
            printf("%d is greatest", y);
            else
            printf("%d is greatest",z);
    }
    return 0;



}
