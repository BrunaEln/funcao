#include <stdio.h>
#include <stdlib.h>

main () {
    
    printf ("TABELA ASCII");
    for (int i = 0; i <= 127; i++) {
        printf ("Decimal: %i  Hexadecimal:%x  Caractere: %c\n", i, i, i);
    }
}