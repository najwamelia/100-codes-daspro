/* Program untuk menampilkan data mahasiswa menggunakan struct 
by: Najwa Amelia Q. A.*/
#include <stdio.h>
#include <string.h>
// deklarasi struct entitas mahasiswa
struct Mahasiswa {
    char nama[100];
    char nim[20];
    char jurusan[50];
    int semester;
    double ipk;
    int status;
};
int main() {
    struct Mahasiswa mhs1; // deklarasi variabel mhs1 yang bertipe data struct
    // mengakses member-member dari variabel struct 
    strcpy(mhs1.nama, "Ilham Wahanadi");
    strcpy(mhs1.nim, "5035206016");
    strcpy(mhs1.jurusan, "Ilmu Komunikasi");
    mhs1.semester = 3;
    mhs1.ipk = 3.68;
    mhs1.status = 1;
	// menampilkan value member-member dari variabel struct 
	printf("========Data Mahasiswa=========\n\n");
    printf("Nama\t: %s\n", mhs1.nama);
    printf("NRP\t: %s\n", mhs1.nim);
    printf("Sem\t: %d\n", mhs1.semester);
    printf("IPK\t: %.2lf\n", mhs1.ipk);
    printf("Status\t: %s\n", (mhs1.status == 1 ? "Aktif" : "Tidak Aktif"));  
    return 0;
}
