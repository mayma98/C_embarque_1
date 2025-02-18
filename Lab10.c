/*#include <stdio.h>
#include <stdlib.h>
float moyenne (nb)
{
    float note,moy=0,x,t[nb];
    int coef,i;
    for (i=0;i<nb;i++)
    {
        printf("donner note de matiere et le coef n %d ",i);
        scanf("%f",&note);
        scanf("%d",&coef);
        x=note*coef;
        t[i]=x;
    }
    for (i=0;i<nb;i++)
    {
        moy=moy+t[i];
    }
        return moy/nb;
}
void main()
{
    int nb;
    printf("donner les nbres de matieres :\n");
    scanf("%d",&nb);
    printf("la moyenne est : %f ",moyenne(nb));
}

*/

#include <stdio.h>
#include <stdlib.h>
float moyenne (nb)
{
    float note,moy=0,x;
    int coef,i;
    for (i=0;i<nb;i++)
    {
        printf("donner note de matiere et le coef n %d ",i);
        scanf("%f",&note);
        scanf("%d",&coef);
        x=note*coef;
        moy=moy+x;
    }
        return moy/nb;
}
void main()
{
    int nb;
    printf("donner les nbres de matieres :\n");
    scanf("%d",&nb);
    printf("la moyenne est : %f ",moyenne(nb));
}
