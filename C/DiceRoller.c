#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    srand(time(NULL));
    printf("\nEnter the number of dice: ");
    scanf("%d", &n);

    printf("\nThe number fo dice are ( ");

    for (int i = 0; i < n; i++)
        printf("%d ", (rand() % 6) + 1);
    printf(")");
}