#include <stdio.h>
int main()
{
    int Ram;
    int Shyam;
    int Ajay;

    printf("Enter the age of Ram:\n");
    scanf("%d", &Ram);
    printf("Enter the age of Shyam:\n");
    scanf("%d", &Shyam);
    printf("Enter the age of Ajay:\n");
    scanf("%d", &Ajay);

    if (Ram > Shyam)
    {
        if (Ram > Ajay)
            printf("Ram is youngest:%d", Ram);
        else
            printf("Ajay is youngest:%d", Ajay);
    }
    else
    {
        if (Shyam > Ajay)
            printf("Shyam is youngest:%d", Shyam);
        else
            printf("Ajay is youngest:%d", Ajay);
    }
    return 0;
}
