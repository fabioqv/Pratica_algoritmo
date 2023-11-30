#include <stdio.h>
int main() {
    int i, n[5];

    for (i = 0; i < 5; i ++){
    printf("Informe 5 valores \n");
        scanf("%d", &n[i]);
    }
    for (i = 5; i > 0; i--){
        printf("%d \n", n[i-1]);
    }
}