#include <stdio.h>
#include <stdlib.h>

int lab2()
{
    float p;
    int cout;
    printf("donner le poids d'un colis en kg:\n");
    scanf("%f",&p);
    if(p<=1)
        {
            cout=10;
            }
            else
                {
                    cout=20;
                    }
    printf("le cout d'expedition est : %d",cout);

}
