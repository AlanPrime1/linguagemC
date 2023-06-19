#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ficha_pessoa
{
    char nome[250];
    int idade;
    int peso;
    float altura;
};

int main()
{

    setlocale(LC_ALL, "Portuguese");

    struct ficha_pessoa pessoa[3];
    int i;

    for (i = 0; i < 3; i++)
    {

        fflush(stdin);
        printf("Digite o nome da pessoa %d\n", i + 1);
        gets(pessoa[i].nome);

        printf("Digite a idade da pessoa %d\n", i + 1);
        scanf("%d", &pessoa[i].idade);

        printf("Digite o peso da pessoa %d\n", i + 1);
        scanf("%d", &pessoa[i].peso);

        printf("Digite a altura da pessoa %d\n", i + 1);
        scanf("%f", &pessoa[i].altura);
    }

    for (i = 0; i < 3; i++)
    {
        printf("O nome da pessoa é %s\n",pessoa[i].nome);
        printf("A idade da pessoa é %d\n", pessoa[i].idade);
        printf("O peso da pessoa é %d \n",pessoa[i].peso );
        printf("A altura da pessoa é %2.f\n", pessoa[i].altura);
      
    }

    return 0;
}












