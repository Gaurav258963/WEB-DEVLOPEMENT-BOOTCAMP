#include<stdio.h>
void reverseArray(int arr[],int start,int end)
{
    int temp;
    while(start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }

}
void printArray(int arr[],int size)
{
    int i ;
    for(int i = 0; i<size; i++)
    printf("%d ",arr[i]);

    printf("\n");
}
int main()
{
    int arr[] = {1,2,3,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    reverseArray(arr,0,n-1);
    printf("Reversed Array is \n");
    printArray(arr,n);
    return 0;
}