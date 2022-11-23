#include<stdio.h>
#include<string.h>

int main()
{
    int t, i,j, counter;
    int n[10];
    char toss[10][20];
    scanf("%d",&t);


    for(i=0; i<t; i++)
    {
        scanf("%d", &n[i]);
        scanf("%s", toss[i]);
    }



    for(i=0; i<t; i++)
    {
        counter=0;

        for(j=0; j<n[i]; j++)
        {
            if(toss[i][j]=='H')
            {
                counter++;
            }

        }
        if(counter>n[i]-counter)
        {
            printf("England");
        }
        else
        {
            printf("Pakistan");
        }
        printf("\n");

    }






    return 0;
}
