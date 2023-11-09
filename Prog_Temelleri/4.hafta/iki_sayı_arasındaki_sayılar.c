#include <stdio.h>

int main() {
    int baslangic,bitis;
    printf("Sirasiyla baslangic ve bitis degelerini giriniz.");
    scanf("%d%d",&baslangic,&bitis);

    while(baslangic <= bitis) {
        printf("Sayac degerı: %d\n", baslangic);
        // Eger 1 yerine 2 ser artirmak isitoyrsaniz +=2 yapmaniz gerek.
        baslangic ++;
    }
    printf("Dongu Sonu.");
    return 0;
}
