#include<stdio.h>
int main()
{
    int arr[7] = {23,56,78,89,54,33,54};
    int x = 11;
    int check = 0;
    for(int i = 0; i<=6; i++){
        if(arr[i]==x){
            check = 1;
            break;

        }
    }
    if(check == 0){
        printf("%d is not present in the Array",x);
    }
    else{
        printf("%d is present in the Array",x);
    }
    return 0;
}