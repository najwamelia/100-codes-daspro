// Program untuk mencari nilai diskriminan. by: Najwa Amelia Q.A
#include <stdio.h>
int main() {
	// deklarasi variabel
    int a, b, c, dis;
	printf("Masukkan nilai konstanta a, b, dan c: ");
	// menginput nilai konstanta a, b, dan c dari persamaan
    scanf("%d %d %d", &a, &b, &c);
    // menghitung diskriminan
    dis = (b * b) - 4 * a * c;
    // menampilkan hasil
    printf("\nDiskriminan: %d\n", dis);
    return 0;
}
