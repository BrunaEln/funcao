#include <stdio.h>

float opcao1 (float precoAtt);
float opcao2 (float precoAtt);

main () {
    float preco, result;
    printf ("Digite o preco do produto: ");
    scanf ("%f", &preco);

    if (preco < 100) {
        result = opcao1(preco);
        printf ("Preco atualizado --> R$%.2f", result);
    } else {
        result = opcao2(preco);
        printf ("Preco atualizado --> R$%.2f", result);
    }
}

float opcao1 (float precoAtt) {
    float resultado;
    resultado = precoAtt + (precoAtt * 0.1);
    return resultado;
}

float opcao2 (float precoAtt) {
    float resultado;
    resultado = precoAtt + (precoAtt * 0.2);
    return resultado;
}