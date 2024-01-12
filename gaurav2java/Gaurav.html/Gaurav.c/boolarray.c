#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {12, 34, 45, 67, 89, 90, 78};
    int x = 78;
    int idx = -1;
    bool flag = false;
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            idx = i;
            break;
        }
    }
    if (flag == false)
    {
        printf("%d is not present in the Array", x);
    }
    else
    {
        printf("%d is present in the Array and its index is %d", x,idx);
    }
    return 0;
}