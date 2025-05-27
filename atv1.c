#include <stdio.h>
#include <locale.h>
int main(){
int dia;
    printf("Digite um numero!\n");
    scanf(%d,&dia);

    switch (dia){
    
    case 1:
    printf("Segunda-feira!");
        break;
    case 2:
    printf("Terça-feira!");
        break;
    case 3: 
    printf("Quarta-feira!");
        break;
    case 4:
    printf("Quinta-feira!");
        break;
    case 5: 
    printf("Sexta-feira!");
        break;
    case 6:
    printf("Sábado!");
        break;
    case 7:
    printf("Domingo!");
        break;
    default:
    printf("ENTRADA INVALIDA!");
        break;
}


}
