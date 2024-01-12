#include<stdio.h>
int main()
{
    int x;
    printf("Enter The Number:\n");
    scanf("%d",&x);
    if(x>99 && x<1000)
    printf("Three digit Number\n");
    else
    printf("Not a Three digit Number\n");
    return 0;

}