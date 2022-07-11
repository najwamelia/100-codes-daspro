#include  <stdio.h>
int ganti(long int n);	// fungsi prototype
int konversi(long int n); // fungsi prototype
int main()
{
      long int n;
     //To take user input
      printf("Masukkan bilangan yang akan diubah 0 menjadi 1:\n");
      scanf("%d", &n);	// menginputkan angka ke variabel n
      //menampilkan hasilnya dengan memanggil fungsi konversi
      printf("\nBilangan setelah diubah ==>\n%d\n", konversi(n));
      return 0;
}
// fungsi untuk mengubah digit 0 menjadi 1
int ganti(long int n) {
	if (n == 0)
		return 0;
	// untuk digit terakhir
	int digit = n % 10;
	if (digit == 0)
		digit = 1;
	// untuk sisa digit lain, dan tambahkan digit terakhit
	return ganti(n/10) * 10 + digit;
}
int konversi(long int n) {
	if (n == 0)
		return 1;
	else
		return ganti(n);
}
