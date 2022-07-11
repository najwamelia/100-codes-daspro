// Progam untuk mencari nilai rata-rata. by: Najwa Amelia Q.A
#include <stdio.h>
int main() {
    int banyak;	// deklarasi variabel
    int sum = 0;	// deklarasi dan assign 0 pada variabel sum
    float mean;	// deklarasi variabel untuk rata-rata
    printf("Banyak input nilai: ");
    scanf("%d", &banyak);	// membaca input banyaknya angka
	// untuk i tidak melebihi batas banyak, eksekusi:
    for(int i=0; i<banyak; i++) {
        int temp;
        printf("Masukkan nilai ujian-%d : ", i+1);
        scanf("%d", &temp);	// membaca input nilai yang disimpan di temp
        sum += temp;	// menjumlahkan setiap nilai temp dan disimpan di sum
    }
    mean = (float) sum / banyak;	// menghitung rata-rata
	// menampilkan jumlah nilai dan rata-ratanya
	if (mean>=75)
		printf("\n=====LULUS=====\nNilai di atas KKM");
	else 
		printf("\n=====REMIDI=====\nNilai di bawah KKM");
    printf("\nJumlah \t  : %d\nRata rata : %.2f\n", sum, mean);
    return 0;
}
