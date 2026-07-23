#include <stdio.h>

float saberi(float a, float b) {
    return a + b;
}

float oduzmi(float a, float b) {
    return a - b;
}

float pomnozi(float a, float b) {
    return a * b;
}

float podeli(float a, float b) {
    return a / b;
}

int main() {
    int izbor;
    float x, y;

    printf("=== KALKULATOR ===\n");
    printf("1. Sabiranje\n");
    printf("2. Oduzimanje\n");
    printf("3. Mnozenje\n");
    printf("4. Deljenje\n");
    printf("0. Izlaz\n");
    printf("Izbor: ");
    scanf("%d", &izbor);

    if (izbor == 1) {
        printf("Unesi dva broja: ");
        scanf("%f %f", &x, &y);
        printf("Rezultat: %.2f\n", saberi(x, y));
    } else if (izbor == 2) {
        printf("Unesi dva broja: ");
        scanf("%f %f", &x, &y);
        printf("Rezultat: %.2f\n", oduzmi(x, y));
    } else if (izbor == 3) {
        printf("Unesi dva broja: ");
        scanf("%f %f", &x, &y);
        printf("Rezultat: %.2f\n", pomnozi(x, y));
    } else if (izbor == 4) {
        printf("Unesi dva broja: ");
        scanf("%f %f", &x, &y);
        if (y == 0) {
            printf("Greska: deljenje nulom nije dozvoljeno!\n");
        } else {
            printf("Rezultat: %.2f\n", podeli(x, y));
        }
    }

    return 0;
}