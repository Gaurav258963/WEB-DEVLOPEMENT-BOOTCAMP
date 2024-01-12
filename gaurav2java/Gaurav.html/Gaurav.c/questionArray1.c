#include <stdio.h>
int main()
{
    int marks[10] = {23, 34, 56, 13, 34, 43, 32, 52, 31, 33};
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] < 35)
        {
            printf("%d\n ", marks[i]);
            printf("%d\n ", i);
        }
    }

    return 0;
}
