#include<stdio.h>
int main()
{
    int arr[5];
    for(int i = 0; i<=4; i++){
        int a = i+1;
        printf("Enter Element Number %d\n",a);
        scanf("%d",&arr[i]);
    }
    printf("Find the Array : %d",arr[2]);
    return 0;

}