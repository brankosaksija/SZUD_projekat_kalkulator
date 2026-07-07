#include <stdio.h>

int main() {
    int izbor;

    printf("=== KALKULATOR ===\n");
    printf("1. Sabiranje\n");
    printf("2. Oduzimanje\n");
    printf("3. Mnozenje\n");
    printf("4. Deljenje\n");
    printf("0. Izlaz\n");
    printf("Izbor: ");
    scanf("%d", &izbor);

    printf("Izabrana opcija: %d\n", izbor);

    return 0;
}