/*Program mengurutkan angka dengan quick sort
by Najwa Amelia Q. A.*/
#include<stdio.h>

int a[50];	// deklarasi array a
void pisah(int, int);	// fungsi prototype pisah 
int qsort(int, int);		// fungsi prototype qsort

int main() {
	int n, i; 	// deklarasi variabel
	printf("Banyak input angka: ");
	scanf("%d", &n);	// membaca banyak input angka
	printf("Masukkan %d bilangan:\n", n);
	//membaca input bilangan hingga batas n dan distore ke array a
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	pisah(0, n-1);	// memanggil fungsi pisah
	printf("\nUrutan bilangan:\n");
	// menampilkan hasil quick sort, bilangan yang urut dari terkecil ke terbesar
	for(i=0; i<n; i++) {
		printf("%5d", a[i]);
	}
	return 0;
}
// fungsi pisah untuk membagi array jadi dua bagian
void pisah(int awal, int akhir) {
	int s;
	if(awal >= akhir)
		return;
	s = qsort(awal, akhir);
	pisah(awal, s-1);		/* mengambil bagian kiri sub array hingga titik pisah */
	pisah(s+1, akhir);		/* mengambil bagian kanan sub array hingga titik pisah */
}
// fungsi quick sort untuk 
int qsort(int awal, int akhir) {
	int p=a[awal];	/* awal adalah permulaan index */
	int i=awal, j=akhir, temp;
	while(i<j) {
		while(a[i]<=p)	// lanjut sampai mendapat nilai terbesar lebih dari pivot
    		i++;
   		while(a[j]>p)	// lanjut sampai mendapat nilai terbesar lebih dari pivot
    		j--;		
   		if(i<j)
    		temp=a[i], a[i]=a[j], a[j]=temp;
 	}
 	a[awal] = a[j];
 	a[j] = p;
	return j; 	// mengembalikkan posisi pisah
}
