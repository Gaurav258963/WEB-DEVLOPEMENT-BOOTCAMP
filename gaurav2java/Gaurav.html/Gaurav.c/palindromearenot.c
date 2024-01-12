#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int t = n ,rev = 0 ,rem;
    while(n>0){
        rem = n%10;
        rev = rev*10 +rem;
        n = n/10;

    }
    if(t==rev){
        printf("%d is palindrome.",t);
    }
    else
    {
        printf("%d is not palindrome.",t);

    }

    
}