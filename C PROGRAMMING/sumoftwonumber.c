#include <stdio.h>
int main()
{
    int x;
    int y;
    int z;

    printf("Enter The Given Number of x:\n");
    scanf("%d", &x);
    printf("Enter the Given Number of y:\n");
    scanf("%d", &y);
    printf("Enter the Given Number of z:\n");
    scanf("%d", &z);
    printf("Enter The Value:-%d" , (x+y+z)/3);
    return 0;
}