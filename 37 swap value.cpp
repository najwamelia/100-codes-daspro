// Program untuk menukar value pada variabel. by: Najwa Amelia Q. A.
#include<stdio.h>
// fungsi untuk menukar value yang ditunjuk xp dan yp
void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int main() {
	int x, y;	// deklarasi variabel
	printf("x = ");
	scanf("%d", &x);	// membaca input value x
	printf("y = ");
	scanf("%d", &y);	// membaca input value y
	swap(&x, &y);		// memanggil fungsi swap
	// menampilkan hasil pertukaran nilai x dan y
	printf("\nSetelah ditukar ==>\n");
	printf("\nx = %d\ny = %d", x, y);	
	return 0;
}

