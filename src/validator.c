#include <stdio.h>
#include "validator.h"

IPType classify_ip(const char *ip)
{
  int oct1, oct2, oct3, oct4;
  int extracted_itens = sscanf(ip, "%d.%d.%d.%d", &oct1, &oct2, &oct3, &oct4);

  if (extracted_itens == 4)
  {
    if (oct1 >= 0 && oct1 <= 255 && oct2 >= 0 && oct2 <= 255 &&
        oct3 >= 0 && oct3 <= 255 && oct4 >= 0 && oct4 <= 255)
    {
      if (oct1 >= 0 && oct1 <= 255 && oct2 >= 0 && oct2 <= 255 &&
          oct3 >= 0 && oct3 <= 255 && oct4 >= 0 && oct4 <= 255)
      {

        if (oct1 == 10)
        {
          return CLASSE_A;
        }
        else if (oct1 == 172 && oct2 >= 16 && oct2 <= 31)
        {
          return CLASSE_B;
        }
        else if (oct1 == 192 && oct2 == 168)
        {
          return CLASSE_C;
        }
        else
        {
          return IP_PUBLICO;
        }
      }
    }
  }
  return IP_INVALIDO;
}