/******************************************************************************
Elabore um algoritmo que recebe a idade de Futebol e, com base neste valor, classifica-o em uma
das seguintes categorias (preveja erros):
infantil = 5 - 14 anos
sub-17 = 15-17 anos
sub-20 = 18-20 anos

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a idade do Candidato\n");
    scanf("%d", & idade);

    if(idade<5 || idade >20)
    {
        printf("Candidato inapto para as categorias disponíveis");
    }
    else
        if(idade>=5&&idade<=14)
            {
                printf("Candidato apto para a Categoria Infantil");
            }
        else
            if(idade>=15&&idade<=17)
                {
                    printf("Candidato apto para a Categoria Sub-17");
                }
            else
                {
                    printf("Candidato apto para a Categoria Sub-20");
                }
                
    return 0;
}
