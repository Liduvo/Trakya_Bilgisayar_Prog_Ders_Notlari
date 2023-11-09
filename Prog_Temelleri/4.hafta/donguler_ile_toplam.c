#include <stdio.h>

int main() {
    int sayac = 0;
    int son = 10;
    int toplam = 0;

    while(sayac <= son) {

        toplam += sayac;
        sayac ++;
    }
    printf("Toplam Sonuc=%d", toplam);
    return 0;
}
