# Sequência de Fibonacci em C

Este programa imprime a sequência de Fibonacci até o `n`-ésimo número, onde `n` é fornecido pelo usuário.

## Como funciona

O programa usa um laço para calcular e imprimir cada número de Fibonacci após os dois primeiros, que são ambos `1`. Para qualquer número `n` maior ou igual a 3, ele calcula a sequência somando os dois números anteriores.

### Código:

```c
#include <stdio.h>

int main() {
    int i, n;

    printf("Entre com um valor para ver a sequência de Fibonacci até esse valor:\n");
    scanf("%d", &n);

    int a = 1, b = 1, proximo;

    for(i = 3; i <= n; i++) {
        proximo = a + b;
        printf("A sequência é: %d\n", proximo);
        a = b;
        b = proximo;
    }

    printf("\n");
    return 0;
}
