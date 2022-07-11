/* Program untuk mencetak asterisk *, untuk bilangan prima, 
dari n buah bilangan mulai 2 s.d n. by: Najwa Amelia Q. A.*/
#include <stdio.h>
int main()
{
    int x, i, j, n; // deklarasi variabel
    printf("Masukkan bilangan: ");
    scanf("%d", &n); // membaca input banyak bilangan
    // untuk i mulai dari 2 hingga kurang dari n
    for (i=2; i<n; i++) {
        if (i == 2 || i == 3) { // jika i adalah 2 atau 3
            printf("* ");		// cetak asterisk(*)
            continue;
        }
        x=0; //inisialisasi x
        for (j=2; j<=i/2; j++) { // untuk j mulai dari 2 hingga kurang dari sama dg i/2
            if (i%j == 0) {		// jika i modulo j benar 0
                x=1;			
                break;
            }
        }
        if (x == 1)	// jika x benar 1
            printf("%d ", i); 	// cetak i bil prima
		else
            printf("* ");		// jika salah, cetak asterisk(*)
    }
    x=0; //inisialisasi x
    for(j=2; j<=n/2; j++) { // untuk j mulai dari 2 hingga kurang dari sama dg n/2
        if(n%j == 0) { 		// jika n modulo j benar 0
            x=1;
            break;
        }
    }
    if (x == 1)	// jika x benar 1
        printf("%d ", n);	// cetak i bil prima
	else
        printf("* ");		// jika salah, cetak asterisk(*)
	return 0;
}
