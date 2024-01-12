#include<stdio.h>
int main()
{
    int  x;
    printf("Enter The Number:\n");
    scanf("%d" ,&x);
    if(x%5==0) printf("The Number Is divisible By 5:\n");
    if(x%5!=0) printf("The Number Is Not Divisible By 5:\n");
    return 0;
}