#include<stdio.h>
void reverse(int arr[]){
    int i = 0;
    int j = 6;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int arr[7] = {23,45,67,89,65,44,65};
    reverse(arr);
    for(int i = 0; i<=6; i++){
        printf("Enter The reverse Array:%d\n",arr[i]);
    }
    return 0;

}