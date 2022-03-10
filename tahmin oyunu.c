#include <stdio.h>
#include <stdlib.h>

int main(){
int a,tahmin;

tahmin=90;
while(a!=tahmin){
        printf("sayi giriniz\n");
        scanf("%d",&a);
        if(a>tahmin)
        printf("buyuk\n");
        else if(a<tahmin)
        printf("kucuk\n");

}
printf("bildiniz %d",tahmin);
    return 0;
}
