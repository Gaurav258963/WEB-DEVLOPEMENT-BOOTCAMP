#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,f = 1;
printf("Enter the Number: ");
scanf("%d",&n);
for(i = 1; i<=n; i++)
{
    f=f*i;

}

    printf("factorial of %d is %d ",n,f);
}