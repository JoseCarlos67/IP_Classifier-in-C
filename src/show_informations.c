#include <stdio.h>
#include "validator.h"

void show_informations(const char *ip)
{
  int oct1, oct2, oct3, oct4;
  int extracted_itens = sscanf(ip, "%d.%d.%d.%d", &oct1, &oct2, &oct3, &oct4);

  if (oct1 >= 1 && oct1<= 126) {
    printf("\nNetwork ID: %d", oct1);
    printf("\nHost ID: %d.%d.%d", oct2, oct3, oct4);
    printf("\nMascara: 255.0.0.0");
  } else if (oct1 >= 128 && oct1 <=223) {
    printf("\nNetwork ID: %d.%d", oct1, oct2);
    printf("\nHost ID: %d.%d", oct3, oct4);
    printf("\nMascara: 255.255.0.0");
  } else if (oct1 >= 192 && oct1 <= 223) {
    printf("\nNetwork ID: %d.%d.%d", oct1, oct2, oct3);
    printf("\nHost ID: %d", oct4);
    printf("\nMascara: 255.255.0.0");
  }
  
}