#include <stdio.h>
int main()
{
    int x;
    printf("Enter The Year of x:");
    scanf("%d", &x);
    if (x % 400 == 0 || (x%4==0 && x%100!=0))
        printf("Leap Year\n");
    else
  printf("Not leap Year\n");

    return 0;
}