#include <stdio.h>
int main()
{
    int x;

    printf("Enter an integar x:\n");
    scanf("%d", &x);
    //typecasting
    float f = (float)x;
    printf("%.1f", f / 2);
    return 0;
}