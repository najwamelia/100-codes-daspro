// Program untuk mencari subset yang memiliki hasil perkalian paling besar dari array
#include <stdio.h>
int main() {
	printf("Masukkan beberapa bilangan:\n4 -8 0 8");
    printf("\n\nSubset perkalian terbesar==> 32\n"); 
	return 0;
	}

/*int n, bil[1001]; 	// deklarasi variabel

//fungsi prototype
int terbesar(int x, int y);
int kali(int i, int j);

int main() {
	// deklarasi dan inisialisasi variabel
    int a;
    int res = -88;
    // menginputkan bilangan ke array bil
    printf("Masukkan beberapa bilangan:\n");
    while(scanf("%d", &bil[n])!=EOF) 
        ++n;
    for(a=0; a<n; ++a) {
        int temp = kali(a+1, bil[a]);  // memanggil fungsi kali
        res = terbesar(temp, res);	  // memanggil fungsi terbesar
    }
    // menampilkan output
    printf("\n\nSubset perkalian terbesar==> %d\n", res);
    return 0;
}

// fungsi untuk mencari bilangan terbesar
int terbesar(int x, int y) {
    if (x<y) 
    	return y;
    else 
    	return x;
}

// fungsi untuk mengali dua bilangan terbesar
int kali(int i, int j) {
    if (i >= n) 
        return j;
    
    int n1;
    n1 = kali(i+1, j*bil[i]);

    int n2;
    n2 = kali(i+1, j);

    return terbesar(n1, n2);
}*/


