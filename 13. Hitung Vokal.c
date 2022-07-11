// Program untuk menghitung jumlah huruf vokal pada sebuah string S.
//by: Najwa Amelia Q. A.
#include<stdio.h>
#include<string.h>

int main() {
    char S[100]; // deklarasi array S
    printf("Tulis Kata/Kalimat:\n");
    gets(S); // membaca input string S 
    // inisilisasi
    int x = strlen(S), y; 
    int a_vokal=0;
    int i_vokal=0;
    int u_vokal=0;
    int e_vokal=0;
    int o_vokal=0;
	// loop untukmenghitung jumlah huruf vokal
    for(y=0; y<x; y++) { 
        char z = S[y];
        z = tolower(z);			// konversi uppercase ke lowercase
        if(z == 'a') a_vokal++;
        if(z == 'i') i_vokal++;
        if(z == 'u') u_vokal++;
        if(z == 'e') e_vokal++;
        if(z == 'o') o_vokal++;
    }
     // mencetak banyaknya huruf vokal
    printf("\nA/a : %d\n", a_vokal);
    printf("I/i : %d\n", i_vokal); 
    printf("U/u : %d\n", u_vokal); 
    printf("E/e : %d\n", e_vokal); 
    printf("O/o : %d\n", o_vokal); 
    return 0;
}
