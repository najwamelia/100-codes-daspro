/* Program untuk mencetak asterisk * untuk bilangan genap,
dari n buah bilangan mulai 1 s.d n. by: Najwa Amelia Q. A*/
#include <stdio.h>
int main() {
    int n, i, rem; // deklarasi variabel
    printf("Masukkan bilangan:\n");
    scanf("%d", &n); // membaca input banyak bilangan
    // untuk i adalah 1 hingga n
    for (i=1; i<=n; i++) { 
    	rem=i%2;
        if(rem == 1)
            printf("%d ", i); 	// mencetak bilangan aslinya untuk bilangan ganjil
		else 
            printf("* "); 	// mencetak asterisk * untuk bilangan genap
    }
	return 0;
}
