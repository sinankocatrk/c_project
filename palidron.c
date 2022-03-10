/*Palindromik say�, iki taraftan okundu�u zaman okunu� y�n�yle ayn� olan say�lard�r.

�rnek: 1, 4, 8, 99, 101, 363, 4004, 9889, 13531 vb.

*/


#include <stdio.h>
int main() {
    int n, reversedN = 0, remainder, originalN;
    printf("Say�: ");
    scanf("%d", &n);
    originalN = n;

    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    if (originalN == reversedN)
        printf("%d say�s� palindromik say�d�r.", originalN);
    else
        printf("%d say�s� palindromik say� de�ildir.", originalN);

    return 0;
