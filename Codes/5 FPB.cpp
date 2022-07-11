// Program untuk menentukan FPB dari dua bilangan
#include <stdio.h>
int main() {
    int n1, n2, i, fpb; // mendeklarasikan variabel
    printf("Masukkan dua bilangan: ");
    scanf("%d %d", &n1, &n2); // menginputkan bilangan

    for(i=1; i <= n1 && i <= n2; ++i) {
        if(n1%i==0 && n2%i==0)
            fpb = i;
    }
    printf("\nFPB dari %d dan %d = %d", n1, n2, fpb); 

    return 0;
}
