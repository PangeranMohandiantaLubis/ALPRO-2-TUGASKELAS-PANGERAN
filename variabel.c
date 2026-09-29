#include <stdio.h>

int main(void) {
    int jumlahSensor = 4;
    float teganganSumber = 12.0;
    double resistansiPresisi = 220.125;
    char kodeAlat = 'M';

    printf("Jumlah sensor : %d\n", jumlahSensor);
    printf("Tegangan      : %.2f V\n", teganganSumber);
    printf("Resistansi    : %.3lf Ohm\n", resistansiPresisi);
    printf("Kode alat     : %c\n", kodeAlat);

    return 0;
}