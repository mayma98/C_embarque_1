#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    int i;
    do
    {
        printf("donner un entier positif : \n");
        scanf("%d",&k);
    } while(k<0);
    for (i=0;i<=k;i++)
        {
            printf("%d",i);
        }
}
