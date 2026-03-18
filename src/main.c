#include <stdio.h>
#include <string.h>
#include "validator.h"
#include "show_informations.h"

int main(int argc, char const *argv[])
{
    char ip_input[50];

    printf("======================================\n");
    printf("        CLASSIFICADOR DE IPs          \n");
    printf("======================================\n");
    printf("Digite um endereco IP para analisar: ");

    if (fgets(ip_input, sizeof(ip_input), stdin) != NULL)
    {
        ip_input[strcspn(ip_input, "\n")] = 0;

        IPType result = classify_ip(ip_input);

        switch (result)
        {
        case CLASSE_A:
            printf("O IP %s eh um IP PRIVADO da CLASSE A.\n", ip_input);
            show_informations(ip_input);
            break;
        case CLASSE_B:
            printf("O IP %s eh um IP PRIVADO da CLASSE B.\n", ip_input);
            show_informations(ip_input);
            break;
        case CLASSE_C:
            printf("O IP %s eh um IP PRIVADO da CLASSE C.\n", ip_input);
            show_informations(ip_input);
            break;
        case IP_PUBLICO:
            printf("O IP %s eh um IP PUBLICO (valido, mas nao privado).\n", ip_input);
            show_informations(ip_input);
            break;
        case IP_INVALIDO:
            printf("ERRO: '%s' nao eh um formato de IPv4 valido.\n", ip_input);
            break;
        }
        printf("\n-----------------\n");
    }
    return 0;
}
