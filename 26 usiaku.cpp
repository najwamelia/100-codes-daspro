// Program untung menghitung usia. by: Najwa Amelia Q.A.
#include <stdio.h>
void umur(int tglNow, int tglLahir, int thnNow, int blnLahir, int blnNow, int thnLahir); // fungsi  prototype
int main() {
	// current dd// mm/yyyy
	int tglNow, blnNow, thnNow, tglLahir, blnLahir, thnLahir;
	printf("Tanggal saat ini: ");
	scanf("%d", &tglNow);
	printf("Bulan saat ini: ");
	scanf("%d", &blnNow);
	printf("Tahun saat ini: ");
	scanf("%d", &thnNow);
	printf("\nTanggal lahir: ");
	scanf("%d", &tglLahir);
	printf("Bulan lahir: ");
	scanf("%d", &blnLahir);
	printf("Tahun lahir: ");
	scanf("%d", &thnLahir);
	// memanggil fungsi umur
	umur(tglNow, blnNow, thnNow, tglLahir, blnLahir, thnLahir);
	return 0;
}
// fungsi untuk menghitung umur sekarang
void umur(int tglNow, int blnNow, int thnNow, int tglLahir, int blnLahir, int thnLahir) {
	// deklarasi array banyak hari pada bulan
	int bulan[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	/* jika tgl lahir melebihi tgl sekarang, bulan ini tidak dihitung 
	dan tambah 30 ke tanggal untuk mengurangi tanggal dan mendapatkan sisa harinya */
	if (tglLahir > tglNow) {
		tglNow = tglNow + bulan[blnLahir - 1];
		blnNow = blnNow - 1;
	}
	/* jika bulan lahir melebihi bulan sekarang, tahun ini tidak dihitung
	dan tambahkan 12 ke bulan untuk dapat dikurangi dan mengetahui perbedaannya*/
	if (blnLahir > blnNow) {
		thnNow = thnNow - 1;
		blnNow = blnNow + 12;
	}
	// menghitung tanggal, bulan, dan tahun
	int hitungTgl = tglNow - tglLahir;
	int hitungBln = blnNow - blnLahir;
	int hitungThn = thnNow - thnLahir;
	// cetak perhitungan umur sekarang
	printf("\nUsiamu saat ini:\n%d Tahun, %d Bulan, %d Hari", hitungThn, hitungBln, hitungThn);
}

