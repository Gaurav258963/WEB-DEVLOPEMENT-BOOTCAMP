#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter The First Value a:\n");
    scanf("%d", &a);
    printf("Enter The second Value b:\n");
    scanf("%d", &b);
    printf("Enter The Third Value c:\n");
    scanf("%d", &c);

    if(a>b && a>c)
    printf("%d is Greatest!",a);
    if(b>c && b>=a)
     printf("%d is Greatest!",b);
    if(c>a && c>b)
     printf("%d is Greatest!",c);
    
   
    return 0;

}