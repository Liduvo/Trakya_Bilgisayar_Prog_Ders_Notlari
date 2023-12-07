#include <stdio.h>

int main() {

    int sayidizisi[5];
    int i;
    
    for(i = 0; i<5;i++){
        scanf("%d",&sayidizisi[i]);

    }
    for (i = 0; i <5 ; i++) {
        printf("sayidizisi[%d]=%d\n",i,sayidizisi[i]);
    }
    
    return 0;
}
