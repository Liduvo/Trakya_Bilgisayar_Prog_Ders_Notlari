#include <stdio.h>

int main() {
    int sayac = 1,toplam_cift = 0,toplam_tek = 0;

    while(sayac <= 100) {

        if(sayac%2 == 0)
        {
            toplam_cift += sayac;
        }
        else
        {
            toplam_tek += sayac;
        }
        sayac++;
    }
    printf("Tek Sayıların Toplamı=%d\n", toplam_tek);
    printf("Cift Sayıların Toplamı=%d\n", toplam_cift);
    return 0;
}
