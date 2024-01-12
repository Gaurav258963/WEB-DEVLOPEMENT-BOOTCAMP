#include<stdio.h>
int main()
{
    int x;

    printf("Enter The Percentage:");
    scanf("%d",&x);
    
    if(x>=81 && x<=100) printf("Very Good");
    if(x>=61 && x<=80) printf("Good");
    if(x>=41 && x<=60) printf("Average");
    if(x>=0 && x<=40) printf("Fail");
    return 0;

}