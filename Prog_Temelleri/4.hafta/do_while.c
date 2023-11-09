#include <stdio.h>

int main() {
    int toplam = 0;
    int i = 0;
    do{
        toplam+=i;
        i++;
    }while(i<=10);
    
    printf("%d\n",toplam);
    return 0;
}
