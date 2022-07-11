/*Program untuk menentukan banyak cara mengatur posisi 
duduk melingkar n orang. by Najwa Amelia Q.A.*/
#include <stdio.h>

// fungsi untuk mencari banyak permutasi
int melingkar(int n) {
	int hasil = 1;
	while (n > 0) {
		hasil = hasil * n;
		n--;
	}
	return hasil;
}

int main() {
	int n;
	printf("Masukkan banyak orang yang duduk melingkar:\n");
	scanf("%d", &n);
	printf("\nBanyak cara mengatur posisi duduk melingkar:\n%d\n", melingkar(n - 1));
}


