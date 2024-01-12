#include<stdio.h>
int main()
{
    int x;
    printf("Enter The Number:\n");
    scanf("%d",&x);
    //if statement
    if(x>0) printf("Positive Number\n");
    if(x<0) printf("Negative Number\n");
    if(x==0) printf("invalid Number\n");
    return 0;
}