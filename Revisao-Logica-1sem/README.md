# Particularidades

- Em comandos de leitura de variáveis do tipo char, coloque a função getchar() antes do comando scanf seguinte.
Exemplo:

```c
#include<stdio.h>
int main(){
 int numero;
 char carac;
 printf("\ndigite um numero:");
 scanf("%d", &numero);
 printf("\ndigite um caracter:");
 getchar();                       // <--- necessário para o programa não quebrar
 scanf("%c",&carac);
 printf("\nnumero digitado foi: %d", numero);
 printf("\ncaracter digitado foi:%c", carac);

}
```

- FOR

Exemplo: 

```c
#include <stdio.h>
int main() {
 int i;

 for(i=1000; i < 2001; i++) {  // a variavel i gera os numeros de 1000 a 2000
    if (i % 11 == 5) {
      printf("\n%d", i);
    }
 }
}
```

Exemplo -  questão

Uma loja utiliza o código 'V' para vendas à vista e 'P' para vendas à prazo. Faça uma programa em C leia o código e o valor das compras efetuadas por 15 clientes. Para cada cliente, calcule o valor a pagar, pois para as compras à vista é dado um desconto de 5% e para as compras à prazo mostre o valor da parcela. O parcelamento das compras à prazo é em 3X.

```c
LÓGICA PENDENTE DE CORREÇÃO

#include <stdio.h> 

int main () {

    int i, valorCompra, compraAVista, compraAprazo;

    for(i=1;i < 16; i++) {

        printf("Digite o valor da compra: %d \n", valorCompra);
        scanf("%d", &valorCompra);
        
        compraAVista = valorCompra - (valorCompra * 0.05); 
        printf("O valor de sua compra a vista é: R$ %i", compraAVista);

        compraAPrazo = valorCompra / 3;
        printf("O valor de sua compra a prazo, em 3 parcelas, é: R$ %i, compraAPrazo");
    }
}
```