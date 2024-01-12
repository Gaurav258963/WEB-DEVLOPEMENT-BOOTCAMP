#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[7] = {23,45,65,76,43,71,54};
    int max = INT_MAX;
    int smax =INT_MIN;
    
    for(int i = 0; i<=6; i++){
        if(max<arr[i]){
            max = arr[i];
            
        }
    }
    for(int i = 0; i<=6; i++){
        if(arr[i]!=max && smax<arr[i]){
        
            smax = arr[i];
            
        }
    }
    
    printf("Enter The Maximum Number:%d\n",smax);
   

    

}