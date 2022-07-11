/* Program untuk menampilkan kalender tahun yang diinput. by: Najwa Amelia Q.A */
#include<stdio.h>
// deklarasi variabel
int month_days[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
char *month_name[]= {
	" ",
	"\n\n\nJanuary",
	"\n\n\nFebruary",
	"\n\n\nMarch",
	"\n\n\nApril",
	"\n\n\nMay",
	"\n\n\nJune",
	"\n\n\nJuly",
	"\n\n\nAugust",
	"\n\n\nSeptember",
	"\n\n\nOctober",
	"\n\n\nNovember",
	"\n\n\nDecember"
};
// fungsi-fungsi prototype
int get_first_daycode(int year);
void set_feb_days(int year);
void print_calendar(int year, int daycode);

int main(void) {
	int year, daycode, leapyear;
	printf("Masukkan tahun dalam 4 digit, (contoh: 2020): ");
	scanf("%d", &year);	// membaca input tahun
	// memanggil fungsi-fungsi
	daycode = get_first_daycode(year);	
	set_feb_days(year);
	print_calendar(year, daycode);
	printf("\n");
	return 0;
}
/* fungsi untuk mengembalikan daycode dari hari pertama tahun ini. 
   jika kode hari adalah 1, berarti hari pertama adalah hari Senin */
int get_first_daycode(int year) {
	int daycode;
	int x, y, z;
	x = (year - 1) / 4;
	y = (year - 1) / 100;
	z = (year - 1) / 400;
	daycode = (year + x - y + z) %7;
	return daycode;
}
// fungsi untuk bulan februari tahun kabisat
void set_feb_days(int year) {
	if(year% 4 == 0 && year%100 != 0 || year%400 == 0)
	   month_days[2] = 29;
	else
	   month_days[2] = 28;
}
// fungsi untuk menampilkan kalender
void print_calendar(int year, int daycode) {
	int month, day;
	for ( month = 1; month <= 12; month++ ) {
		printf("%s, %d", month_name[month], year); // menampilkan nama bulan dan tahun
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" ); // menampilkan hari
		// for loop untuk mencetak spasi antar tanggal
		for ( day = 1; day <= 1 + daycode * 5; day++ ) {
			printf(" ");
		}
		/* for loop untuk mencetak tanggal-tanggal*/
		for ( day = 1; day <= month_days[month]; day++ ) {
			printf("%2d", day );
			// cek apakah hari sebelum Sabtu, jika tidak, mulai baris berikutnya dari hari Minggu
			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
		// pengaturan posisi untuk bulan selanjutnya sesuai daycode
		daycode = ( daycode + month_days[month] ) % 7;
	}
}
