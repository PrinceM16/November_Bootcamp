#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int players[5] = {60,86,71,91,85};
    int goals[5] = {21,34,25,37,35};
    int games[5] = {10,12,11,16,14};
    float ppg;
    int bestgames;
    float best_ppg;

    for(i=0; i<5; i++){

        ppg[i] = goals[i] / games[i];
        printf("%d \t %d \t %d \t %d \t %.2f \n", players[i], goals[i], games[i], ppg[i]);

    }

if (ppg[i] > best_ppg){

best_ppg = ppg[i];
bestgames = players[i];
}

printf("\n the player is%d \n",bestgames);


    return 0;
}
