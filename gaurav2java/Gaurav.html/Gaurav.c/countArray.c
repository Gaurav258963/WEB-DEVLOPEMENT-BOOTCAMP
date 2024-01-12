#include<stdio.h>
int main()
{
    int arr[7] = {2,5,6,7,8,9,4};
    int x = 7;
    int count = 0;
    
    for(int i = 0; i<7; i++){
    if(arr[i]>x){
    

     count++;
    }
}
     printf("%d",count);
     return 0;
}