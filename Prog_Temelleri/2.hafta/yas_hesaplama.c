#include <stdio.h>

int main() {
    const int b_yil = 2023;
    int yil,yas;
    printf("Dogum yilini giriniz.");
    scanf("%d", &yil);

    yas = b_yil - yil;

    printf("Yasinizi: %d", yas);
    return 0;
}
