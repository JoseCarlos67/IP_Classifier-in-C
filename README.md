# 🌐 Classificador de IPs

![C](https://img.shields.io/badge/C-00599C?logo=c&logoColor=white)
![GCC Compiler](https://img.shields.io/badge/Compiler-GCC-A42E2B?logo=gnu&logoColor=white)
![Terminal](https://img.shields.io/badge/CLI-Terminal-4D4D4D?logo=powershell&logoColor=white)
![Status](https://img.shields.io/badge/Status-Finalizado-green)

Este projeto foi criado exclusivamente para consolidar estudos sobre endereços IP e revisar a linguagem de programação C. A aplicação via linha de comando (CLI) recebe um endereço IPv4 do usuário, valida sua formatação e o classifica de acordo com as faixas de rede locais ou públicas.

---

## 🎯 Objetivo

O projeto foi desenvolvido para unir os fundamentos teóricos de Redes de Computadores com boas práticas de programação em **C**, com foco em:
1.  **Fundamentos de Redes:** Compreensão prática da RFC 1918 (endereços privados).
2.  **Manipulação de Strings e Memória:** Leitura segura de dados do terminal e extração de valores formatados.
3.  **Arquitetura Modular em C:** Separação de responsabilidades utilizando arquivos de cabeçalho (`.h`) e de implementação (`.c`).

---

## ⚙️ Funcionalidades Implementadas

- 📥 **Leitura Segura:** Captura de entrada do usuário via terminal sem risco de *buffer overflow*.
- 🔍 **Validação de Formato:** Verificação estrutural do IP garantindo a presença de 4 octetos numéricos.
- 🧮 **Validação Lógica:** Bloqueio de valores fora do limite aceitável do padrão IPv4 (0 a 255).
- 🏷️ **Classificação de Redes:** Identificação automática se o IP pertence à Classe A, B, C (Privados) ou se é um IP Público.
- 🧪 **Testes Automatizados:** Bateria de testes unitários para garantir a integridade da lógica de negócios.

---

## 🚀 Tecnologias Utilizadas

- **Linguagem:** C
- **Compilador:** GCC (MinGW-w64)
- **Ambiente:** Windows Terminal / PowerShell

---

## 📋 Conceitos e Práticas Aplicadas

- **Lógica e Estrutura em C:**
    - **Enums (`typedef enum`):** Criação do tipo `TipoIP` para padronizar e facilitar a leitura dos retornos da função de validação.
    - **Parsing de Strings:** Utilização da função `sscanf` para extrair os octetos diretamente da string fornecida pelo usuário.
    - **I/O Seguro:** Uso de `fgets` combinado com `strcspn` para ler o terminal removendo quebras de linha indesejadas, substituindo o vulnerável `scanf`.
- **Arquitetura e Qualidade:**
    - **Modularização:** Separação clara entre Interface (`main.c`) e Regra de Negócio (`validador.c` e `validador.h`).
    - **Testes Nativos:** Implementação de testes unitários utilizando a biblioteca nativa `<assert.h>` para validar o comportamento da função principal contra falsos positivos e IPs mal formatados.

---

## 📝 Regras de Negócio

✅ **Formato IPv4:** O endereço deve conter exatamente 4 blocos separados por ponto, onde cada bloco deve ser $\ge 0$ e $\le 255$.
✅ **Classe A (Privada):** IPs no intervalo `10.0.0.0` a `10.255.255.255`.
✅ **Classe B (Privada):** IPs no intervalo `172.16.0.0` a `172.31.255.255`.
✅ **Classe C (Privada):** IPs no intervalo `192.168.0.0` a `192.168.255.255`.
✅ **IP Público:** Qualquer endereço IPv4 válido que não se enquadre nas regras de rede privada.

---

## 👨‍💻 Desenvolvido por

**José Carlos da Silva Esteves**
[GitHub: @JoseCarlos67](https://github.com/JoseCarlos67)