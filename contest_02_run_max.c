#include<stdio.h>
#include<string.h>

int main()
{
    int t, i, j, run, max;

    scanf("%d",&t);

    int num_of_players[20];
    int run_of_players[20][11];

    for(i=0; i<t; i++)
    {

        scanf("%d",&num_of_players[i]);
        for(j=0; j<num_of_players[i]; j++)
        {
            scanf("%d",&run_of_players[i][j]);
        }
    }
    for(i=0; i<t; i++)
    {
        max=0;
        for(j=0; j<num_of_players[i]; j++)
        {
            run= run_of_players[i][j] ;
            if(run > max)
            {
                max=run;
            }

        }
        printf("%d\n",max);
    }





    return 0;
}
