#include <stdio.h>

int escolhas(int escolha);
float opcao1(float opcao); 
float opcao2(float opcao);
float opcao3(float opcao);


main () {

    float preco, resultado, resposta2, resposta3, resposta4;
    int n1, resposta1;
    printf ("Informe o valor da sua compra: ");
    scanf ("%f", &preco);
    
    resposta1 = escolhas(n1);

        if (resposta1 == 1) {
            resposta2 = opcao1(preco);
            printf ("Valor atualizado da compra --> R$ %.2f", resposta2);
        } else if (resposta1 == 2) {
            resposta3 = opcao2(preco);
            printf ("Valor atualizado da compra --> R$ %.2f em 2x", resposta3);
        } else if (resposta1 == 3){
            resposta4 = opcao3(preco);
            printf ("Valor atualizado da compra --> R$ %.2f", resposta4);
        } else {
            printf ("Digite um numero valido!");
        }
    
}

    int escolhas(int escolha) {
        int resultado;
        printf ("\nESCOLHA UMA DAS OPCOES DE PAGAMENTO:\n");
        printf ("\n[1] A vista com 10%% de desconto\n[2] Duas vezes (Preco da etiqueta)\n[3] De 3 a 10 vezes 3%% de juros ao mes (compras acima de R$100,00)\n");
        printf ("\nOpcao: ");
        scanf ("%d", &resultado);
        return resultado;
    }

    float opcao1(float opcao) {
        float resultado;
        resultado = opcao - (opcao * 0.1);
        return resultado;
    }
    float opcao2(float opcao) {
        float resultado;
        resultado = opcao/2;
        return resultado;
    }
    float opcao3(float opcao) {
        float resultado;
        int escolha;

        if (opcao > 100) {
            printf ("Em quantas vezes sera parcelada a compra?\n[1] P/3x | [2] P/4x | [3] P/5x | [4] P/6x | [5] P/7x | [6] P/8x | [7] P/9x | [8] P/10x\n\n Opcao:  ");
            scanf ("%d", &escolha);
                switch (escolha){
                    case 1:
                        resultado = opcao + (3*(opcao * 0.03));
                        break;
                    case 2:
                         resultado = opcao + (4*(opcao * 0.03));
                         break;
                    case 3:
                         resultado = opcao + (5*(opcao * 0.03));
                         break;
                    case 4:
                         resultado = opcao + (6*(opcao * 0.03));
                         break;
                    case 5:
                         resultado = opcao + (7*(opcao * 0.03));
                         break;
                    case 6:
                         resultado = opcao + (8*(opcao * 0.03));
                         break;
                    case 7:
                         resultado = opcao + (9*(opcao * 0.03));
                         break;
                    case 8:
                         resultado = opcao + (10*(opcao * 0.03));
                         break;
                    default:
                        printf ("Sua compra nao e valida para esta opcao de pagamento");
                }   
            return resultado;
        }
    }