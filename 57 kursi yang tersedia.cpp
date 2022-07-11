/* Program untuk menemukan semua kemungkinan permutasi dimana n orang 
dapat menempati r jumlah kursi di kelas. by: Najwa Amelia Q. A*/
#include<stdio.h>
// fungsi untuk menghitung faktorial
int fact(long int x) {
	long int fact=1,i;
	for(i=1; i<=x; i++)
		fact=fact*i;
	return fact;
}
int main() {
	long int n, ada, permutasi, temp, x, y;
	printf("Masukkan banyak orang: ");
	scanf("%ld",&n);	// menginput banyak orang yang ingin duduk
	printf("Masukkan banyak kursi yang tersedia: ");
	scanf("%ld", &ada);	// menginput banyak kursi yang tersedia
	// Base condition
	// jika n kurang dari r, tukar n dan r
	if(n<ada) {	
		temp=n;
		n=ada;
		ada=temp;
	}
	x = fact(n);
	y = fact(n-ada);
	permutasi = x/y;
	printf("\nBanyak cara orang dapat menempati kursi: ");
	printf("%ld", permutasi);
	return 0;
}
