#include<stdio.h>
int main()
{
    int arr[7] = {5,7,9,8,3,4,1};
    int max = -1;
    for(int i = 0; i<=7; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}