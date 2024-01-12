#include<stdio.h>
int main()
{
    int x;
    printf("Enter The Number:\n");
    scanf("%d",&x);

    if(x%5==0){
        if(x%3==0) printf("Divisiblee By 5 and 3");
        else printf("Not Divisible By 5 and 3");

    }
    else printf("Not Divisible By 5 and 3");
    return 0;
}