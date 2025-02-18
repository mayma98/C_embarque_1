#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb_j;
    printf("donner un nombre de jour :");
    scanf("%d",&nb_j);
    switch(nb_j)
    {
    case 1 :
        printf("lundi");
        break;
    case 2 :
        printf("mardi");
        break;
    case 3:
        printf("mercredi");
        break;
    case 4:
        printf("jeudi");
        break;
    case 5:
        printf("vendredi");
        break;
    case 6 :
        printf("samedi");
        break;
    case 7 :
        printf("dimanche");
        break;
    default: printf("un error pour le nombre de jour");
    }
}
