#include <stdio.h>
int main()
{
    int x;
    int y;
    int z;

    printf("Enter The Given input x:\n");
    scanf("%d",&x);
    printf("Enter The Given Input y:\n");
    scanf("%d", &y);
    printf("Enter the Given Input z:\n");
    scanf("%d",&z);

    printf("Enter the Value:-%d", x % y % z);
    return 0;
}