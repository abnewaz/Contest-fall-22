#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, res, sum=0;
    int over_t, ball=6;

    scanf("%d",&over_t);

    int runs[over_t][ball];

    for(i=0; i<over_t; i++)
    {
        for(j=0; j<ball; j++)
        {
            scanf("%d",&runs[i][j]);
        }

    }
    for(i=0; i<over_t; i++)
    {
        sum=0;
        for(j=0; j<ball; j++)
        {
            sum += runs[i][j];

        }
        if(sum>0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }

    }



    return 0;
}
