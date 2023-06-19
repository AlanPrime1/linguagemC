#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


struct ficha_pessoa
{
    char nome[250];
    int idade;
    char endereco[250];

};

int main(){


 

setlocale(LC_ALL,"Portuguese");

struct ficha_pessoa pessoa;

printf("Digite o nome da pessoa:\n");
gets(pessoa.nome);

printf("Digite a idade da pessoa:\n");
scanf("%d",&pessoa.idade);

fflush(stdin);   

printf("Digite o endereço da pessoa:\n");
gets(pessoa.endereco);

printf("\n\n");




printf("O nome da pessoa é: %s \n", pessoa.nome);
printf("A idade da pessoa é: %d \n", pessoa.idade);
printf("O endereço da pessoa é: %s\n", pessoa.endereco);

return 0;

}













