/* 
Implemente uma função que receba como parâmetro um vetor de números inteiros (vet) de tamanho
n e inverta a ordem dos elementos armazenados nesse vetor.
*/

#include <stdio.h>
int main() {
    int x;
    int i;

    printf("Informe quantos valores pretende inserir \n");
        scanf("%d", &x);
    int n[x];

    for (i = 0; i < x; i++){
        printf("Informe o %do valor \n", i+1);
            scanf("%d", &n[i]);
    }

    for (i = x; i > 0; i--){
        printf("%d \n", n[i-1]);
    }
    return 0;
}