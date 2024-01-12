#include <stdio.h>
int main()
{
    float f;
    printf("Enter The Real Number:\n");
    scanf("%f", &f);
    int x = (int)f;
    float a = (float)x;
    if (f - a == 0)
        printf("Number Is Integer\n");
    if (f - a != 0)
        
    printf("Number Is Not Integer\n");
    return 0;
}