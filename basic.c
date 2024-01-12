#include <stdio.h>
int main()
{
    int defined_var;

    printf("defined_var : %d\n" , defined_var);

    defined_var = 12;
    //declaration + definition + initialization
    int ini_var = 25;

    printf("Value of defined_var after initialization: %d\n , defined_var");
    printf("Value of ini_var: %d\n" ,ini_var);
     return 0;
}
