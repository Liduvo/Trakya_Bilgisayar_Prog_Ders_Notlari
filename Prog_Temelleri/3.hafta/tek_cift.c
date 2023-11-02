#include <stdio.h>

int main() {

    int sayi;

    printf("Sayı gir: ");
    scanf("%d", &sayi);

    int sayi_mod = sayi % 2;

    if(sayi_mod == 0)
    {
        printf("ÇIFT");
    }
    else
    {
        printf("TEK");
    }
    return 0;
}
