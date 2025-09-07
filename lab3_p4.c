#include<stdio.h>

void main()

{
    int x;
    printf("Enter the value of X:\n");
    scanf("%d", &x);

    printf("The first %d natural numbers are:\n", x);
    for(int a=1 ; a<=x ; a++ )
    {
        printf("%d\n", a);

    }

}

