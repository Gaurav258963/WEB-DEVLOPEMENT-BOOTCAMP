#include <stdio.h>
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}
int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}
int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}
int getMax(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = max(res, arr[i]);
    return res;
}
int main()
{
    int arr[] = {12.34, 55, 67, 87, 78.54};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Minimum Element of Array: %d\n", getMin(arr, n));
    printf("Maximum Element of Array: %d\n", getMax(arr, n));
    return 0;
}
