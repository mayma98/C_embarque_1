#include <stdio.h>
#include <stdlib.h>
void saisir(int *e)
{
    scanf("%d",e);
}

int main()
{
    int i;
    int *pv;
    pv=&i;
    printf("donner valeur entier : ");
    saisir(pv);
    printf("%d ",*pv);
    return 0;
}
