#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int valor = 0;
int valor1 = 0;
int op = -1;
int can = -1;
void adicao();
void subtracao();
void multiplicacao();
void divisao();
void bin();
void modulo();

void faxina(){
     sleep(1);
    system("clear");
}

void reset(){
    op = 1;
    sleep(2);
    system("clear");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);
}

void get(){
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor1);
}

int main() {
     start:
     reset();
    switch (op) {
    case 1: {adicao();}
    break;
    case 2: {subtracao();}
    break;
    case 3: {multiplicacao();}
    break;
    case 4: {divisao();}
    break;
    case 5: {modulo();}
    break;
    case 6: {bin();}
    break;
    default:{op = -1; goto start;}
    }
    return 1;
}

void init(){
    if( op != -1){
    printf("\nDigite 1 para continuar e 0 para sair: ");
    scanf("%d", &can);
    if(can) main();
      else{ exit(1);}
    }
}

void bin(){
    printf("Digite o valor a ser transformado em binário: ");
    scanf("%d", &valor);
    while (valor) {
    printf("número: %d binário: %d\n", valor,(valor % 2));
    valor = (valor / 2);
    }
    init();
}

void adicao(){
    get();
    printf("A soma dos valores é: %d", valor1+valor);
    init();
}

void subtracao(){
    get();
    printf("A subtracao dos valores é: %d", valor-valor1);
    init();
}

void divisao(){
    get();
    if(!valor1)
      {printf("Não é póssível dividir por 0");}
      else{
        printf("A divisao dos valores é: %d", valor/ valor1);
      }
    init();
}

void multiplicacao(){
    get();
    printf("A multiplicacao dos valores é: %d", valor*valor1);
    init();
}

void modulo(){
    get();
    printf("A modulo dos valores é: %d", valor%valor1);
    init();
}
