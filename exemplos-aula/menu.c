#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op;
    int tries = 0;
    do
    {
        printf("Digite sua opção (1 até 3): ");
        scanf("%d", &op);
        tries++;
        if (tries > 3)
        {
            printf("Cansei!\n");
            exit(0);
        }
    } while (op < 1 || op > 3);

    ///////////////////////////////////

    switch (op)
    {
    case 1:
        printf("Você digitou %d\n", op);
        break;
    case 2:
        printf("Você digitou %d\n", op);
        break;
    case 3:
        printf("Você digitou %d\n", op);
        break;
    }
}