#include <stdio.h>
//challenge: girilen sayının kaç basamaklı olduğunu algılayıp ona göre içinde kaç tane 7 olduğunu bulan c algoritmasını yazın
int main()
{
    int sayi,temp,a=0,counter,kalan;
    int basamak = 0;

    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    temp=sayi;

    while(temp > 0){
        temp = temp / 10;
        basamak++;
    }

        while (counter<basamak){
            kalan=sayi%10;
        if(kalan==7)
            a++;
            sayi/=10;
          counter++;

        }

    printf("Girilen sayi %d basamaklidir ve icinde %d adet 7 vardir",basamak,a);
}
