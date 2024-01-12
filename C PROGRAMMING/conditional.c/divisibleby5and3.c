#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number:\n");
    scanf("%d",&x);
    if(x%5==0 || x%3==0)
    printf("Divisibility by 5 or 3\n");
    else
    printf("Not divisibility by 5 or 3\n");
    return 0;
}