#include <stdio.h>
void reverse(int arr[],int a ,int b){
for(int i = a,j = b; i<j; i++,j--)
{
  //  int i = 0;
   //// int j = 6;
  //  while (i < j)
   // {
        int temp = arr[i];

        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main()
{
    int arr[7] = {45, 34, 21, 24, 56, 78, 65};
    reverse(arr,24,56);
   // for (int i = 1, j = 4; i < =j; i++, j--)
   // {
   /////     int temp = arr[i];
    //    arr[i] = arr[j];
     //   arr[j] = temp;
   // }
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}