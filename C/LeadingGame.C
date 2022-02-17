#include <stdio.h>

int main(void)
{
    int cases, roundScore[2], score[2] = {0, 0}, largest[2] = {0, 0};
    
    printf("\nEnter the number of Rounds: ");
    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d %d", &roundScore[0], &roundScore[1]);

        score[0] += roundScore[0];
        score[1] += roundScore[1];

        if (score[0] > score[1])
        {
            if (score[0] - score[1] > largest[0])
                largest[0] = score[0] - score[1];
        }
        else
        {
            if (score[1] - score[0] > largest[1])
                largest[1] = score[1] - score[0];
        }
    }

    if (largest[0] > largest[1])
        printf("1 %d\n", largest[0]);
    else
        printf("2 %d\n", largest[1]);
}
