
#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Pozitif bir sayi girin: ");
    scanf("%d", &n);

i=2;
while (i<=n/2)  {
    i++;


        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("1 ne asal ne de bileþiktir.");
    }
        else
        if (flag == 0)
            printf("%d sayisi Asal Sayidir.", n);
        else
            printf("%d sayisi Asal Sayi degildir.", n);


    return 0;
}
