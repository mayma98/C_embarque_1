#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[4];
    int i=0;
    /*remplissage*/
    for (i=0;i<4;i++)
        {
            printf("remplir case n %d ",i);
            scanf("%d",&T[i]);
        }
        printf("le tableau est :");
    /*do
    {
        printf("remplir case n %d ",i);
        scanf("%d",&T[i]);
        i++;
    } while(i<4);
    while(i<4)
        {
            printf("remplir case n %d ",i);
            scanf("%d",&T[i]);
            i++;
        }*/
    /*affichage*/
    for (i=0;i<4;i++)
        {
            printf("%d ",T[i]);
        }
    return 0;
}
