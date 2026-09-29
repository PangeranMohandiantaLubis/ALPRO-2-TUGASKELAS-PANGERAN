#include <stdio.h>

int main(void)
{
    float tegangan, arus, resistansi;

    printf("Masukkan tegangan (V): ");
    scanf("%f", &tegangan);

    printf("Masukkan arus (A): ");
    scanf("%f", &arus);

    printf("Masukkan resistansi (Ohm): ");
    scanf("%f", &resistansi);

    printf("\nRingkasan: V=%.2f I=%.2f R=%.2f\n", tegangan, arus, resistansi);

    return 0;
}