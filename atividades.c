#include <stdio.h>
int main(){
int i,n;

    printf("Entre com um valor e veja os numeros que esse valor tem na sequencia fibonacci\n");
        scanf("%d", &n);

    int a = 1, b = 1,proximo;

    
    for(i=3;i<=n;i++){
    proximo = a + b;
    printf("a sequencia fica: %d\n", proximo);
    a = b;
    b = proximo;
    }
        
    printf("\n");

        return 0;
    }