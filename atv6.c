#include <stdio.h>

int main(){
float chico = 1.70;
float juca = 1.10;
int anos;
        do
        {
            juca += 0.3;
            chico += 0.2;
            anos++;

        } while (juca < chico);

        printf("Juca será maior que chico em:%d anos", anos);

        return 0;
        
    }




    /*/Chico  tem  1,70m  e  cresce  2  cenmetros  por  ano, enquanto Juca tem 1,10m e cresce 3 
cenmetros por ano.  Construir  um  programa em C que  calcule  e  imprima  quantos anos  serão  
necessários   para  que  Juca  seja  maior  que Chico (Utilize a estrutura while). /*/
