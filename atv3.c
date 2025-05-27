#include <stdio.h>


int main() {
int ano;


printf("Insira um ano!");
    scanf("%d", &ano);
    // DIVISIVEL POR 4, POR 100 E SÓ SERÁ BISSEXTO SE TAMBÉM POR 400
    if (ano % 4 == 0 && ano % 100 != 0) ||( ano % 400 == 0)
    {
        printf("ANO BISSEXTO!");
    }
    else
    {
        printf("NAO É BISSEXTO");
    }
    
}

