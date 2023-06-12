#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



void main(){

setlocale(LC_ALL,"Portuguese");

char nome[250]="Marta";
int idade = 25;
int opcao;

do{


    printf("1-Mostrar nome: \n");
    printf("2-Mostrar idade: \n");
    printf("0-Sair do programa: \n");

    printf("Informe a opção desejada: \n");
    scanf("%d", & opcao);

    switch(opcao){

        case 1:
        printf("Nome %s \n", nome);
        break;

        case 2:
        default:
        printf("Idade: %d \n", idade);
        break;

        case 0:
        printf("Saindo do programa... \n");
        break;

    }
    
}while(opcao!=0);
}
