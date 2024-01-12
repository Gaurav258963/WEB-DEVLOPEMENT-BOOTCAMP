#include<stdio.h>
int main()
{
    int arr[8] ={2,5,9,7,2,1,4,3};
    int totalPairs = 0;
    int x = 12;
    for(int i = 0; i<=7;i++){
        for(int j = i+1; j<=7;j++){
            if(arr[i]+arr[j] ==x){
                totalPairs++;
                printf("%d,%d\n",arr[i],arr[j]);
            }
        }

        }
        printf("%d",totalPairs);
        return 0;

    }
