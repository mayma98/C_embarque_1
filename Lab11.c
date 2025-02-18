#include <stdio.h>
#include <stdlib.h>


void fun(void)
{
    int var1=0;
    static int var2=0;
    var1++;
    var2++;
    printf("la valeur de var1 est %d \n",var1);
    printf("la valeur de var2 (static) est %d \n",var2);
}
void main()
{
    int i;
    for (i=0;i<4;i++)
    {
        fun();
    }
}
/*static=initialise une seule fois
