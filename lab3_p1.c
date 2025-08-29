#include<stdio.h>

void main()

{
    int a;
    printf("Enter the value of A:");
    scanf("%d", &a);

    do
    {
        printf("%d\n", a);
            a++;
    }while (a<=10);

}
