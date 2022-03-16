
/* A C-Program that increase / decrease a Number */

#include <stdio.h>
#include <unistd.h> // sleep() komutu kullanimi icin kutuphaneyi dahil ediyoruz

int main(void) {

    int num,finish;

    printf("deger giriniz");
    scanf("%d",&finish);

   // geri dogru sayma Decrease
    while(0 < finish) { // 0 da dongu sona ermesi icin
        sleep(1); // her seferinde 1 saniye bekle 
        finish --;
        printf("%d\n", finish);
    }

/*
    // ileri dogru sayma / increase (onceki while dongusu yorum haline alin)
        num=0;
    while(num < finish){
        sleep(1);
        num++;
        printf("%d\n",num);
    }
    */
    
    return 0;
}
