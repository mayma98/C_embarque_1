#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p;
    int cout;
    printf("donner le poids d'un colis en kg:\n");
    scanf("%f",&p);
    if(p<=1){
            cout=10;
            printf("le cout d'expedition est : %d",cout);
            } else if((1<p)&&(p<5)){
                    cout=20;
                    printf("le cout d'expedition est : %d",cout);
                    } else if((5<p)&&(p<=10)) {
                        cout=30;
                        printf("le cout d'expedition est : %d",cout);
                        } else {printf("error");}

}

