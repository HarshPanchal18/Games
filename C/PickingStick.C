#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printStick(int n)
{
    for (int i = 0; i < n; i++)
        printf("%c ", 179);
    printf("\n");
}

int main(void)
{
    bool comp = false;
    int sticks = 21, uIn;

    printf("\nPicking Up Stick\n");
    printf("\nPick any number from 1-4. The one picking the last stick looses\n\n");
    scanf("%d", &uIn);

    while (uIn > 0)
    {
        printf("\nNumber of Stick\n", sticks);
        printStick(sticks);
        printf("\nEnter the number of sticks to pick: ");
        scanf("%d", &uIn);

        sticks -= uIn;
        comp = !comp;
        if (sticks == 1)
            break;

        printf("\nNumber of Sticks: %d\n", sticks);
        printStick(sticks);
        printf("\n");

        sticks -= (5 - uIn);
        printf("COMPUTER picks up: %d\n", (5 - uIn));
        comp = !comp;
        if (sticks == 1)
            break;

        printf("\n");
    }

    printf("\nNumber of Sticks: %d\n\n", sticks);
    if (comp)
        printf("Player Wins!");
    else
    {
        printf("Player has to pick the last stick\n");
        printf("Player Looses!");
    }
}
