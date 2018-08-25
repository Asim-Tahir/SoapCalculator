#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char using_namespace_std;

int main()
{
	setlocale(LC_ALL, "Turkish");                                //printf Fonksiyonu ��in T�rk�e Dil Deste�i
	int yagcesidi;                   																												//Kullan�lacak Ya� �e�idinin Tan�mlamas�n� Yapt�m
 
	printf("Ka� �e�it Ya� �le �al��acaks�n�z (n): ");
	fflush(stdin); //Kullan�c�n�n Ka� Ya� �e�idi �le �al��aca��n� ��renir.
	scanf("%d",&yagcesidi);
	printf("\n");                            //Ve Dizinin Eleman Say�s�n� Tan�mlar, De�i�kene Atar
	int i,j,k;
	float yag[yagcesidi-1];
	//printf("Ya� �e�idi: %d\n",yagcesidi);

	for(i=0; i<yagcesidi; i++) {                                             //For D�ng�s�yle Kullan�lacak Ya� �e�itlerini
		//Gram Cinsinden De�erlerini Tek Tek Al�r
		printf("%d. Ya� �e�idinin Gram Cinsinden �l��s� (X): ",i+1);
		fflush(stdin);
		scanf("%f",&yag[i]);
	}

	printf("\n");
	/*
		int f;                                                                 //Dizideki De�erleri Bir Bir Ekrana Yazd�r�r
		for(f=0;f<yagcesidi;f++)
			printf("%d. Ya� �e�idinin Gram Cinsinden �l��s�: %d\n",f+1,yag[f]);
		printf("\n");
	*/

	float SAPDegeri[yagcesidi-1],kostikdegerleri[yagcesidi-1],kostikdegeri=0,sudegeri=0;

	for(j=0; j<yagcesidi; j++) {
		SAPDegeri[j] = 0;
		printf("%d. Ya� �e�idinin Sabunla�ma De�erini Yaz�n�z (0,0): ",j+1);
		fflush(stdin); //Ya� �e�itlerinin SAP De�erini Al�r
		scanf("%f",&SAPDegeri[j]);

		//printf("%d. Ya� �e�idinin Sabunla�ma De�eri: %.4f\n",j+1,SAPDegeri[j]); //Al�nan Sabunla�ma De�erini Ekrana Yazd�r�r

		kostikdegerleri[j] = (yag[j]*SAPDegeri[j]);        											//Kullan�lan Ya� Gram� Ve o Ya��n Sabunla�ma De�eri �arp�l�r
	}

	for(k=0; k<yagcesidi; k+=2) {
		kostikdegeri += (kostikdegerleri[k] + kostikdegerleri[k+1]);  //Kat�lacak Kostik Miktar� Hesaplan�r

		sudegeri += (yag[k]+yag[k+1]);                                //Kat�lacak Su Miktar� Hesaplan�r
	}

	printf("\n");
	printf("Kullan�lacak NaOH(Kostik) Miktar�: %.4f gram\n",kostikdegeri); //Hesaplanan Kostik Ve Su Miktar� Ekrana Yazd�r�l�r
	printf("Kullan�lacak Su Miktar�: %.4f gram\n",sudegeri*0.38); //Hesaplanan Kostik De�erini 0.38 ile �arp�ld�
	printf("Program� Bitirmek ��in Herhangi Bir Tu�a Bas�n..."); getch();

}
