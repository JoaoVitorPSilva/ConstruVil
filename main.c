#include <stdio.h>
#include <stdlib.h>

int main()
{
    int produto;
    double total, preco, desconto, totald;
    char continuar, pagamento;

    printf("Seja bem vindo a CONSTRUVIL! \n");
    printf("Selecione os materiais que deseja comprar pelo codigo: \n");
    do{
        printf("1- Areia(metro)/ 2- Pedra(metro)/ 3- Cimento(saco)/ 4- Cal(saco)/ 5-Tijolo 6 furos(milheiro)/ 6- Tijolo 9 furos(milheiro)\n");
        printf("Informe o codigo do material que deseja comprar: \n");
        scanf("%d", &produto);
        switch(produto){
            case 1:
            preco == 65;
            total += 65;
            break;
            case 2:
            preco == 39;
            total +=39;
            break;
            case 3:
            preco == 21.99;
            total +=21.99;
            break;
            case 4:
            preco == 13.86;
            total +=13.86;
            case 5:
            preco == 409;
            total += 409;
            break;
            case 6:
            preco == 1246;
            total += 1246;
            break;
        }
    printf("Deseja continuar o pedido e escolher mais um produto? S/N \n");
    scanf(" %c", &continuar);
    }while(continuar == 'S');

    printf("Total do pedido sem taxa de entrega: = %.2lf \n", total);
    printf("O metodo de pagamento sera a vista? OBS: Existe um desconto de 10 porcento para pagamentos a vista S/N \n");
    scanf(" %c", &pagamento);
    if(pagamento == 'S'){
        desconto = total/10;
        totald = total - desconto;
        printf("Valor a pagar com o desconto de 10 porcento: %.2lf \n", totald);
        printf("Total do pedido com taxa de entrega de R$ 40.00: %.2lf \n", totald+40);
    }else {
        printf("Total a pagar: %.2lf \n", total+40);
    }

    return 0;
}

