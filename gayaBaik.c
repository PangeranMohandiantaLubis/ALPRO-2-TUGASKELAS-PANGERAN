#include <stdio.h>

int main(void)
{
    float harga = 220.5;
    int jumlahUnit = 3;
    char satuan = 'V';

    printf("%d unit @ %.1f%c\n", jumlahUnit, harga, satuan);

    return 0;
}