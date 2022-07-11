// Program untuk menampilkan data nilai UN siswa. by: Najwa Amelia Q. A.
#include<stdio.h>
#include<string.h>
void display(struct Siswa un);	// prototype fungsi display
// deklarasi struct Siswa dan Find
struct Siswa {
    char nama[100];
    int ipa, ing, indo, mat;
};
struct Find {
    char nama[100];
};

int main() {
    int x;	// deklarasi variabel untuk banyak data yang diinput
    printf("Banyak data siswa yang diinput: ");
    scanf("%d", &x);	// input value variabel x
    printf("Input nama dan nilai UN siswa:\n");
    struct Siswa data[x];	// mengakses struct siswa variabel data
    for(int i=0; i<x; i++) {	// untuk banyak data tidak lebih dari batas x, eksekusi:
        scanf("%s", &data[i].nama);		// input nama siswa
        scanf("%d", &data[i].mat);		// input nilai matematika
        scanf("%d", &data[i].ipa);		// input nilai ipa
        scanf("%d", &data[i].indo);		// input nilai bhs indonesia
        scanf("%d", &data[i].ing);		// input nilai bhs inggris
    }

    int y;	// deklarasi variabel untuk banyak data yang ditampilkan
    printf("Banyak data siswa yang ditampilkan: ");
    scanf("%d", &y);	// input value variabel y
    printf("Nama siswa yang akan ditampilkan: ");
    struct Find name[y];	// mengakses struct find variabel name
    for(int i=0; i<y; i++) {	// untuk banyak data tidak lebih dari batas y, eksekusi:
        scanf("%s", name[i].nama);	// input nama siswa yang akan ditampilkan
    }
	 
    int z;	// deklarasi variabel
    for (int i=0; i<y; i++) {	// untuk banyak data tidak lebih dari batas y
        z=0;	// assign nilai 0 pada z
        for(int j=0; j<x; j++) {
        	// jika data nama siswa equal to 0, assign nilai 1 pada z
            if(strcmp(name[i].nama, data[j].nama) == 0) { 
                z=1;	display(data[j]);	// eksekusi dengan memanggil fungsi display
                continue;
            }
        }
        if(z != 1) // jika z tidak equal to 1, maka nama yang diinput tidak sesuai 
            printf("Data nilai %s tidak ditemukan\n", name[i].nama); 
    }
    return 0;
}
// fungsi display untuk menampilkan data nilai UN siswa yang dicari
void display(struct Siswa un) {
    printf("\n===> Data Nilai UN <===");
    printf("\nNama\t\t: "); puts(un.nama);
    printf("Matematika\t: %d \n", un.mat);	
    printf("IPA\t\t: %d \n", un.ipa);
    printf("Bhs Indonesia\t: %d \n", un.indo);
    printf("Bhs Inggris\t: %d \n", un.ing);
}
