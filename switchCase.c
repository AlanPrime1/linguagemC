#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");


    int opcao;

do
{

    printf("1- manteiga \n");
    printf("2-ovo\n");
    printf("3-batata\n");
    printf("0-encerra o programa\n");

    printf("Digite um numero:");
    scanf("%d",&opcao);


    switch (opcao)
    {
    case 1:
      printf("manteiga\n");
        break;

        case 2:
        printf("Ovo\n");
        break;
        case 3:

        printf("Batata\n");
        break;
        case 0:
        printf("programa encerrado!\n");
        break;
    default:
        printf("Opção invalida\n");
        break;
    }
} while (opcao!=0);









    return 0;
}


