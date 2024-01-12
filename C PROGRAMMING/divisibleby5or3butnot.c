#include<stdio.h>
int main()
{
    int x;
    printf("Enter The Number:");
    scanf("%d", &x);

    if (x % 15 != 0)
    {
        if (x % 3 != 0)
        {
            if (x % 5 == 0)
                printf("Condition Valid");
            else
                printf("Condition invalid");
        }
        else
            printf("Condition valid");
    }
    else
        printf("Condition invalid");
    return 0;
}