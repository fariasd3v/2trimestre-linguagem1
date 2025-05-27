#include <stdio.h>

int main()
{
    int op;

    printf("------MENU------")
        printf("1 - CADASTRAR");
    printf("2 - APAGAR USUARIO");
    printf("3 - Sair");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Usuario Cadastrado!") break;
    case 2:
        printf("Usiario Apagado!");
        break;
    case 3:
        printf("FIM DO PROGRAMA!");
    default:

        break;
    }
}