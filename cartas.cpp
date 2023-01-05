#include<stdio.h>

int main()
{
    int cartas[5],
        i,
        j=0;
    for (i=0; i<5; i++)
        scanf("%d",&cartas[i]);
    for(i=0; i<4; i++)
    {
        if(cartas[i]>cartas[i+1])
            j++;
        else if (cartas[i]<cartas[i+1])
            j--;
    }
    if(j == 4)
        printf("D");
    else if(j == -4)
        printf("C");
    else
        printf("N");
    return 0;
}
