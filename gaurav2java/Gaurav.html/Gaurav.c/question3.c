#include<stdio.h>
int main()
{
    int arr[7] =  {8,7,4,3,5,9,2};
    int min =arr[0];
    for(int i = 0; i<= 6; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}