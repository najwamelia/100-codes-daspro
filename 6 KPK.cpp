// Program untuk menentukan KPK dari dua bilangan
#include <stdio.h>
int main() {
    int n1, n2, max;
    printf("Masukkan dua bilangan: ");
    scanf("%d %d", &n1, &n2);
    // angka max dari n1 dan n2 disimpan dalam max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
    	// memerikasa jika n1 dan n2 adalah faktor dari max
        if (max % n1 == 0 && max % n2 == 0) {
            printf("\nKPK dari %d dan %d = %d.", n1, n2, max);
            break; }
        ++max;
    }
    return 0;
}

