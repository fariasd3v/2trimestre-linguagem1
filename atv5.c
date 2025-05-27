#include <stdio.h>

int main() {
    
    // INICIALIZAMOS COM NUMERO IMPAR 
int i = 101;
// ENQUANTO I FOR MENOR QUE 300 E A SOBRA DA DIVISÃO POR 2 FOR 0
while (i <= 300 && i % 2 != 0)
{ // IMPRIME I E ACRESCENTA MAIS 2 ATÉ O FIM DO PROGRAMA, 299
    printf("%d\n",i);
    i+=2;
    
}


}