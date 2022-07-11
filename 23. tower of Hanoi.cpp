// Program untuk penyelesaian Tower of hanoi by: Najwa Amelia Q.A
#include<stdio.h>
void towerOfHanoi (int n, char dari, char ke, char tengah); // fungsi prototype
int main() {
	int n; // deklarasi variabel 
	printf("Masukkan banyak cakram: "); 
	scanf("%d",&n); // membaca input angka banyaknya cakram 
	if(n<=0) return 0; // jika n kurang dari sama dengan 0, return 0
	towerOfHanoi(n, 'A', 'C', 'B'); // memanggil fungsi towerOfHanoi dengan nama tiang A, B, C 
	return 0;
}
// fungsi penyelesaian tower of Hanoi
void towerOfHanoi (int n, char dari, char ke, char tengah) {
	if (n == 1) { 
		printf("Cakram 1 pindah dari tiang %c ke tiang %c\n", dari, ke); 
		return;
	}
	towerOfHanoi(n-1, dari, tengah, ke);
	printf("Cakram %d pindah dari tiang %c ke tiang %c\n", n, dari, ke);
	towerOfHanoi(n-1, tengah, ke, dari);
}
