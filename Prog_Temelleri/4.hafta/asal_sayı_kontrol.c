#include <stdio.h>

int main() {

    int sayi,i,asal_mi=0;
    printf("Sayi gir");
    scanf("%d",&sayi);

    for(i = 2; i <sayi;i++)
    {
        if(sayi%i==0){
            printf("Bu sayıya bolunuyor : %d\n",i);
            asal_mi = 1;
            break;
        }
    }
    if(asal_mi ==1){
        printf("ASAL SAYI DEGIL");
    }
    else{
        printf("ASAL SAYI");
    }
    return 0;
}
