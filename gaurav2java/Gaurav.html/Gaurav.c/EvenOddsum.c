#include<stdio.h>
int main()
{
    int arr[7] = {2,4,5,6,8,9,5};
    int sumEven = 0;
    int sumOdd  = 0;
    for(int i = 0; i<=6; i++){
        if(i%2==0){
            sumEven += arr[i];


        }
        else{
            sumOdd += arr[i];
        }
    }
        int result = sumEven- sumOdd;
        printf("%d",result);
        return 0;
    
}