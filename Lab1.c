#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (i=0;i=4;i++)
    {
     printf("pour etudiant n %d",i);
     float m1,m2;
     int c1,c2;
     float moy;
     printf("donner les notes de deux matieres :\n");
     scanf("%f",&m1);
     scanf("%f",&m2);
     printf("donner les coefficients :\n");
     scanf("%d",&c1);
     scanf("%d",&c2);
     moy=(m1*c1+m2*c2)/2;
     printf("la moyenne est : %f",moy);
    }


}

