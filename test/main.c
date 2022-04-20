#include <stdio.h>
#include <ctype.h>

void quest0(void)
{
    int i;
    for (i = 48; i < 58; i++)
    {
        printf("%c", i);
    }
}

void quest1(void)
{
    int i;

    i = 0;
    while (i < 10)
    {
        printf("%d", i % 2);
        i++;
    }
}

void quest2(void)
{
    int i;
    for (i=0; i < 10; i++)
    {
        printf("%d", i * 2);
    }
}

void quest3(void)
{
    int i;

    i = 0;
    while (i < 10)
    {
        i++;
        printf("%d", i / 2);
    }
}

void quest4(void)
{
    int i;

    i = -9;
    while (i < 0)
    {
        printf("%d", -i);
        i++;
    }
}

void quest5(void)
{
    int i;

    i = 9;
    while (i--)
    {
        printf("%d", i);
    }
}

void quest6(void)
{
    int i;

    i = 9;
    while (--i)
    {
        printf("%d", i);
    }
}

int some_function(void)
{
    printf("%d", 12);
    return (98);
}

int some_function1(void)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d", i);
    }
    return (i);
}

void debugger()
{
        int i;

        printf("Before loop\n");

        for (i = 0; i < 100; i++)
        {
                if (i % 2 != 0)
                {
                        printf("i is not even so don't print\n");
                        continue;
                }
                else
                {
                        printf("i is even, break to print\n");
                        break;
                }

                printf("Outside of if/else, still inside for loop\n");

                printf("%d\n", i);
        }

        printf("For loop exited\n");
}
/**
 * main - a function that prints 
 * Return: Always 0 (Success)
 */
int main(void)
{
    debugger();
    printf("\n");
    printf("Q0 : ");
    quest0();
    printf("\n");
    printf("Q1 : ");
    quest1();
    printf("\n");
    printf("Q2 : ");
    quest2();
    printf("\n");
    printf("Q3 : ");
    quest3();
    printf("\n");
    printf("Q4 : ");
    quest4();
    printf("\n");
    printf("Q5 : ");
    quest5();
    printf("\n");
    printf("Q6 : ");
    quest6();
    printf("\n");
    printf("Q7 : ");
    some_function();
    printf("\n");
    int result = some_function1();
    printf("\n");
    printf("Q8 : ");
    printf("%d", result);
    printf("\n");
    printf("%d", isupper('R'));
    return (0);
}
