/*Program untuk menunjukkan hari dari input tanggal. by: Najwa Amelia Q. A*/
#include <stdio.h>
int tglSesuai(int h, int b,int t);	// fungsi prototype
int tgl(int thn, int bln, int hr);	// fungsi prototype
int main() {
	// deklarasi dan inisialisasi variables
	int hr, bln, thn;
	int hrNum = 0;
	char namaHr[][12]={"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
	printf("Masukkan tanggal (DD-MM-YYYY): ");
	scanf("%d-%d-%d", &hr, &bln, &thn); // membaca input tgl, bln, thn
	//cek validasi kesesuaian tanggal
	if(tglSesuai(hr, bln, thn) == 1) {
		hrNum = tgl(thn, bln, hr); // memanggil fungsi tgl
		// menampilkan hari yang sesuai dari tanggal
		printf("\nHari pada tanggal di atas:\n===> %s\n", namaHr[hrNum]);
	}
	else
		printf("\n==> Tanggal tidak valid\n");		
	return 0;
}
// fungsi untuk mengecek validasi tanggal
int tglSesuai(int h, int b,int t) {
	//mengecek kesesuaian tahun
	if(t>=1800 && t<=2999) {
		//mengecek kesesuaian bulan
		if(b>=1 && b<=12) {
			//mengecek kesesuaian tanggal
			if(h>=1 && h<=31) {
				if( (h>=1 && h<=30) && (b==4||b==6||b==9||b==11))
					return 1;	// tanggal sesuai
				else if((h>=1 && h<=31) && (b==1||b==3||b==5||b==7||b==8||b==10||b==12))
					return 1;	// tanggal sesuai
				else if((h>=1 && h<=28) && (b==2))
					return 1;	// tanggal sesuai
				else if(h==29 && h==2 && ((t%400==0)||(t%4==0 && t%4!=0)))
					return 1;	// tanggal sesuai
				else
					return 0;	// tanggal tidak sesuai
			}
			else
				return 0;	// tanggal tidak sesuai
		}
		else
			return 0; // bulan tidak sesuai
	}
	else
		return 0; // tahun tidak sesuai
}
// fungsi untuk me-return hari dari 0-6
int tgl(int thn, int bln, int hr) {
	int tgl = 0;
	tgl = (hr + ((153 * (bln + 12 * ((14 - bln) / 12) - 3) + 2) / 5) + (365 * (thn + 4800 - ((14 - bln) / 12))) + ((thn + 4800 - ((14 - bln) / 12)) / 4) - ((thn + 4800 - ((14 - bln) / 12)) / 100) + ((thn + 4800 - ((14 - bln) / 12)) / 400) - 32045)%7;
    return tgl;   
}
