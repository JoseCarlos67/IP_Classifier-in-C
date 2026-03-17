#include <stdio.h>
#include <assert.h>
#include "../src/validator.h" // Volta uma pasta e entra na src para achar o cabeçalho

int main() {
    printf("Iniciando bateria de testes...\n");

    // 1. Testando IPs Privados
    assert(classify_ip("10.0.0.1") == CLASSE_A);
    assert(classify_ip("172.19.1.15") == CLASSE_B);
    assert(classify_ip("192.168.1.15") == CLASSE_C);

    // 2. Testando IPs Públicos (ex: DNS do Google)
    assert(classify_ip("8.8.8.8") == IP_PUBLICO);

    // 3. Testando falhas e IPs Inválidos (Onde sistemas costumam quebrar)
    assert(classify_ip("300.1.1.1") == IP_INVALIDO); // Octeto maior que 255
    assert(classify_ip("192.168.1") == IP_INVALIDO); // Faltando um octeto
    assert(classify_ip("batata") == IP_INVALIDO);    // Texto puro sem números

    // Se o programa chegou até aqui sem "crashar", nossa lógica está perfeita!
    printf("Sucesso! Todos os testes passaram. A logica esta blindada.\n");

    return 0;
}