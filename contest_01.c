#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, n, m;
    char s[50] = "International Cricket Council";
    m = strlen(s);
    for(i=m-1; i>=0; i--)
    {
        printf("%c",s[i]);
    }


    return 0;
}
