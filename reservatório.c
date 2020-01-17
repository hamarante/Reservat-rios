#include <stdio.h>

int main(){

/* Variáveis */

float entrada, saida, A, B, valvula;

/* Inputs e Outputs */

printf("Qual a capacidade do reservatório A? \n");
scanf(" %f", &A);
printf("\n\n\n");
printf("Qual a capacidade do reservatório B? \n");
scanf(" %f", &B);
printf("\n\n\n");
printf("Qual a capacidade da entrada? \n");
scanf(" %f", &entrada);
printf("\n\n\n");
printf("Qual a capacidade da saída ?\n");
scanf(" %f", &saida);



/* Condições */

if (saida < entrada && A >= B)
{
    printf("Válvula aberta. \n");
}else if (saida > entrada && A >=B)
{
    printf("Válvula aberta com 50 porcento da sua capacidade. \n");
}else if (saida = entrada && A > B)
{
    printf("Válvula aberta. \n");
}else if (saida >= entrada && A < B)
{
    printf("Válvula aberta com apenas 50 porcento da sua capacidade. \n");
}else if (A < B && saida < entrada)
{
    printf("Válvula aberta. \n");
}else if (A > B && entrada > saida)
{
    printf("Abrir válvula com 10 porcento da sua capacidade. \n");
} 

}