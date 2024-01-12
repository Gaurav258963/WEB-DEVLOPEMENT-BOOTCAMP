#include<stdio.h>
int main()
{
    int arr[8] = {1,2,5,4,5,6,7,5};
    for(int i =0; i<=6; i++){
        for(int j = i+1; j<=6;j++){
            if(arr[i] ==arr[j]){
                printf("%d is the Duplicate element",arr[i]);
            }
        }
    }
    return 0;
} 