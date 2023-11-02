#include <stdio.h>

int main() {

    int vize, final,vize_y,final_y;
    const int can_degeri = 50;
    float ortalama;
    printf("Vize notunu ve yüzdesini giriniz.");
    scanf("%d%d",&vize,&vize_y);
    printf("Final notunu giriniz.");
    scanf("%d",&final);
    final_y = 100-vize_y;
    ortalama = ((vize*vize_y)+(final*final_y))/100;

    printf("%f\n", ortalama);
    printf("Ders geçme durumunuz(1 = GECTINIZ, 0 = KALDINIZ): %d", ortalama>=can_degeri);

    return 0;

}
