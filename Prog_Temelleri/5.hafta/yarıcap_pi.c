#include <stdio.h>

int main() {

    const float pi = 3.1415;
    int yaricap;
    float alan, cevre;
    printf("Yaricap degerini giriniz.");
    scanf("%d",&yaricap);
    cevre = 2*pi*yaricap;
    alan=pi*yaricap*yaricap;
    printf("Dairenin cevresi=%.2f\n", cevre);
    printf("Dairenin alanı=%.2f\n", alan);

    return 0;

}
