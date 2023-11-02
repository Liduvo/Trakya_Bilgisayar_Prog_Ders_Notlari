#include <stdio.h>

int main() {

    int a,b,c,delta;
    printf("Sirasiyla a,b,c değerlerini giriniz.");
    scanf("%d%d%d",&a,&b,&c);

    delta = b*b-4*a*c;
    printf("Delta sonucu:%d \n", delta);
    printf("Delta karsılastırma sonucu:%d", delta>=0);

    return 0;
}
