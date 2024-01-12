#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter of first side a:\n");
    scanf("%d", &a);
    printf("Enter of Second Side b:\n");
    scanf("%d", &b);
    printf("Enter of Third Side c:\n");
    scanf("%d", &c);

    if (a + b > c && b + c > a && c + a > b)

        printf("Valid tringle\n");
    else
        printf("Not a Valid triangle\n");
    return 0;
}