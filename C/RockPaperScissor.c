#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GenerateRand(int no)
{
    srand(time(NULL));
    return rand() % no;
}

int Greater(char ch1, char ch2)
{
    if (ch1 == ch2)
        return -1;

    else if ((ch1 == 'r' && ch2 == 's') ||
             (ch1 == 'p' && ch2 == 'r') ||
             (ch1 == 's' && ch2 == 'p'))
        return 1;

    else if ((ch2 == 'r' && ch1 == 's') ||
             (ch2 == 'p' && ch1 == 'r') ||
             (ch2 == 's' && ch1 == 'p'))
        return 0;
}

int main(void)
{
    int PlayerScore = 0, CompScore = 0, temp;
    char Player, Comp;
    char dict[45] = {'r', 'p', 's'};

    printf("\nWelcome to the rock, papper and scissor game");

    for (int i = 0; i < 3; i++)
    {
        printf("\nChoose 1 for Rock\nChoose 2 for Paper\nChoose 3 for Scissor\n");
        printf("\nPlayer1 turn: ");
        scanf("%d", &temp);

        Player = dict[temp - 1];
        printf("\nYou choose: %c\n", Player);

        printf("\nChoose 1 for Rock\nChoose 2 for Paper\nChoose 3 for Scissor\n");
        printf("\nCPU turn: ");
        temp = GenerateRand(3) + 1;
        Comp = dict[temp - 1];
        printf("\nCPU choose: %c\n", Comp);

        if (Greater(Comp, Player) == 1)
        {
            CompScore += 1;
            printf("\nCPU got it!\n");
        }
        else if (Greater(Comp, Player) == -1)
        {
            CompScore += 1;
            PlayerScore += 1;
            printf("\nMatch Draw!");
        }
        else
        {
            PlayerScore += 1;
            printf("\nYou got it!\n");
        }
        printf("\nPlayer Score%d\nCPU Score%d\n", PlayerScore, CompScore);
    }

    if (PlayerScore > CompScore)
    {
        printf("Player win \n");
    }
    else if (CompScore > PlayerScore)
    {
        printf("CPU win \n");
    }
    else
    {
        printf("match is draw");
    }
}