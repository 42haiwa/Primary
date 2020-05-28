#include <stdio.h>
#include <math.h>

int isPrimary(int * p_a)
{

    int a = *p_a;

    if (a == 0) return 0;
    if (a == 1) return 0;

    for (int i = 0; i <= sqrt(a); i++)
    {
        if (i == 0) continue;
        if (i == 1) continue;
        if (a % i == 0) return 0;
    }
    return 1;
}

int nextPrimaryNumber(int * p_a)
{
    int a = *p_a;

    do
    {
        a++;
    } while (!isPrimary(&a));
    
    return a;
}

int main()
{

    int number = 5;

    printf("%d", nextPrimaryNumber(&number));

    return 0;
}