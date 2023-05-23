#include <stdio.h> 
#include <stdlib.h>

int main() {

int idade;
float peso;
char nome[100];
char sexo;

printf("Digite sua idade:");
scanf("%d", &idade);
printf("Digite seu peso:");
scanf("%f", &peso);

fflush(stdin);

printf("Digite seu nome:");
gets(nome);
printf("Digite seu sexo:");
scanf("%c", &sexo);




printf("idade: %d \n", idade);
printf("peso: %.2f \n", peso);
printf("nome: %s \n", nome);
printf("sexo: %c \n", sexo); 

system("pause");

return 0;
}
