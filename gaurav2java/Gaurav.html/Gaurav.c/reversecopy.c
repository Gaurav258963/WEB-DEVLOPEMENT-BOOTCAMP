#include<stdio.h>
int main()
{
    int arr[7] = {12,34,56,78,90,54,34};
    int brr[7];
    for(int i =0; i<=6; i++){
        brr[i] = arr[6-i];
        

    }
    for(int i = 0; i<=6; i++){
        printf("%d ",brr[i]);
    

    }

    return 0;
}