#include<stdio.h>

int main(void)
{
    int i, maiorMenor[2] = {0,0};
    float tempMes[4], menor = 9999.9, maior = -999.9;

    printf("Digite as temperaturas medias de cada mes: ");
    for(i = 0; i < 4; i++)
    {
        scanf("%f", &tempMes[i]);
        if(tempMes[i] > maior)
        {
            maiorMenor[0] = i+1;
            maior = tempMes[i];
        }
        if(tempMes[i] < menor)
        {
            maiorMenor[1] = i+1;
            menor = tempMes[i];
        }
    }

    printf("\nA maior temperatura do ano foi de : %.2f\n", maior);
    printf("A menor temperatura do ano foi de : %.2f\n", menor);
    printf("A maior temperatura ocorreu no mes : %d\n", maiorMenor[0]);
    printf("A menor temperatura ocorreu no mes : %d", maiorMenor[1]);
}