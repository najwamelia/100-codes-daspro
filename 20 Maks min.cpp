/* Program untuk menentukan bilangan terbesar dan terkecil dari array A dengan N bilangan.
by: Najwa Amelia Q.A */
#include<stdio.h>

void terbesar(int max, int a[], int n); // fungsi prototype
void terkecil(int min, int a[], int n);	// fungsi prototype

int main() {
    int n, a[100];		// deklarasi variabel dan array
    scanf("%d", &n);	// membaca input n bilangan	
    int y=0; //inisialisasi
	// membaca input n bilangan untuk x mulai dari 0 hingga x kurang dari n
    for(int x=0; x<n; x++) {
        scanf("%d", &a[x]);
        y++;
    }
    terbesar(a[y-1], a, y-1);	// memanggil fungsi terbesar
    printf("\n"); // mencetak baris baru
    terkecil(a[y-1], a, y-1);	// memanggil fungsi terkecil
    return 0;
}

// fungsi rekursif untuk mencari bilangan terbesar
void terbesar(int max, int a[], int n) {
    if(n == 0)
        printf("max: %d", max);
    else if(a[n-1]>max)
        terbesar(a[n-1], a, n-1);
    else
        terbesar(max, a, n-1);
}

// fungsi rekursif untuk mencari bilangan terkecil
void terkecil(int min, int a[], int n) {
    if(n == 0)
        printf("min: %d", min);
    else if(a[n-1]<min)
        terkecil(a[n-1], a, n-1);
    else
        terkecil(min, a, n-1);
}
