#include <stdio.h>
#include <time.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n, i;
    clock_t start, end;
    double cpu_time_used;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    start = clock(); // Inicia a contagem do tempo

    printf("Sequência de Fibonacci até o %dº termo:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    end = clock(); // Encerra a contagem do tempo
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("\nTempo de execução: %f segundos\n", cpu_time_used);

    return 0;
}