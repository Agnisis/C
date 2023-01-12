#include <stdio.h>
void main()
{
    int temp;
    printf("Enter the temperature :- ");
    scanf("%d", &temp);
    if (temp < 10)
        printf("Dont go its ice \n");
    else if (temp < 10 && temp >= 10)
        printf("The weather arround is very cold !!!! \n");
    else if (temp <= 20 && temp >= 10)
        printf("The weather arround is cold !!!! \n");
    else if (temp <= 35 && temp >= 20)
        printf("The weather arround you is moderate !!! \n");
    else if (temp <= 40 && temp >= 35)
        printf("The weather arround you is hot !!! \n");
    else if (temp <= 50 && temp > 40)
        printf("The weather arround you is very hot !!! \n");
    else
        printf("Its Burning hot !!!! \n");
}