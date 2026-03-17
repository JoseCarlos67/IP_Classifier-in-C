#ifndef VALIDATOR_H
#define VALIDATOR_H

typedef enum {
  IP_INVALIDO,
  CLASSE_A,
  CLASSE_B,
  CLASSE_C,
  IP_PUBLICO
} IPType;

IPType classify_ip(const char* ip);

#endif