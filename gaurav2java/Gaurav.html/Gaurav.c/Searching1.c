#include<stdio.h>
int main()
{
    int arr[8] = {34,67,76,43,65,67,67,67};
    int x = 67;
    for(int i =7; i>=0; i--){
        if(arr[i] == x){
            printf("%d is Present in the array and its index is: %d\n",x,i);
           // break;
        }
    }
    return 0;
}