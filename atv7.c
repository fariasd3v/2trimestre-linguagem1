#include <stdio.h>

int main(){
float paisA = 5000000;
float paisB = 7000000;

int anos = 0;
        do
        {
            paisA += paisA * (3.0 / 100) ;
            paisB += paisB * (2.0 / 100);
            anos++;

        } while (paisA < paisB);

        printf("o pais A será maior que o pais B em:%d anos", anos);

        return 0;
        
    }
