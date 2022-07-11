/* Program untuk untuk menentukan kuadran di mana 
koordinat terletak dg if else. by: Najwa Amelia Q. A*/
#include<stdio.h> 
int main()
{
	int x, y; // deklarasi variabel
	printf("Masukkan koordinat x dan y:\n");
	scanf("%d %d", &x, &y); // membaca input angka koordinat
	// jika x dan y bilangan positif, cetak:
	if (x > 0 && y > 0)
		printf("\ntitik(%d, %d) ==> Kuadran 1\n",x,y);
	// untuk kuadran 2, jika x kurang 0 dan y lebih dari 0
	else if (x < 0 && y > 0)
	printf("\ntitik(%d, %d) ==> Kuadran 2\n",x,y);
	// untuk kuadran 3, jika x kurang 0 dan y lebih dari 0
	else if (x < 0 && y < 0)
	printf("\ntitik(%d, %d) ==> Kuadran 3\n",x,y);
	// untuk kuadran 4, jika x lebih 0 dan y kurang dari 0
	else if (x > 0 && y < 0)
	printf("\ntitik(%d, %d) ==> Kuadran 4\n",x,y);
	// untuk titik (0,0), jika x = 0 dan y = 0
	else if (x == 0 && y == 0)
	printf("\ntitik(%d, %d) berada di titik 0, 0\n",x,y);
	return 0;
}
