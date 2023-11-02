#include <stdio.h>

int main() {

    int sayi;

    printf("Sayı gir: ");
    scanf("%d", &sayi);

    if(sayi < 0)
    {
        printf("Sayi Negatif");
    }
    else if(sayi == 0)
    {
        printf("Sayı Sıfır");
    }
    else
    {
        printf("Sayi Pozitif");
    }
    return 0;
}
