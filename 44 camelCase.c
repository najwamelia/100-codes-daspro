/* Program untuk mengubah nama variabel snake_case menjadi bentuk camelCase
by: Najwa Amelia Q. A*/
#include <stdio.h>
int main() {
	char S[100];	// deklarasi variabel array
	int j, i=0;		// deklarasi variabel
	printf("Tulis variabel berformat snake_case:\n");
	scanf("%[^\n]", S);	// menginputkan kata snake_case ke variabel S
	// mengubah format variabel snake_case ke camelCase
	while(S[i] != '\0')
	{
		if(S[i]>=97 && S[i]<=122) 
		{
			S[i]+=0;
			i++;
		}
		else if (S[i] == '_') 
		{
			if (S[i+1]>=97 && S[i+1]<=122)
			{
				S[i] = S[i+1]-32;
				S[i+1] = ' ';
			}		
			else 
			{ 
				S[i] = S[i+1];
				S[i+1] = ' ';
			}
			i+=1;
		}		
		else {
			S[i]+=32;
			i+=1;
		}		
	}
	// menampilkan variabel dalam format camelCase 
	printf("\nVariabel dalam format camelCase:\n");
	for(j=0; S[j] != '\0'; j++)
	{
		if(S[j] == '@')
			continue;	
		else 
			printf("%c", S[j]);
	}
	return 0;
}
