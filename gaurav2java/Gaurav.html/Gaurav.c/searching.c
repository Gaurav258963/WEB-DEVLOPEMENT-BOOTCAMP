#include<stdio.h>
int main(){
    int arr[8] = {12,34,56,78,76,87,54,78};
    int x = 78;
    for(int i =0; i<=7; i++){
        if(arr[i] ==x){
            printf("%d is present in the array and its index is: %d\n",x,i);
           break;

        }
    }
    return 0;
    }
