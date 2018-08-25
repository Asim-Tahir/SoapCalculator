#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char using_namespace_std;

int main()
{
	setlocale(LC_ALL, "Turkish");                                //printf Fonksiyonu Ýçin Türkçe Dil Desteði
	int yagcesidi;                   																												//Kullanýlacak Yað Çeþidinin Tanýmlamasýný Yaptým
 
	printf("Kaç Çeþit Yað Ýle Çalýþacaksýnýz (n): ");
	fflush(stdin); //Kullanýcýnýn Kaç Yað Çeþidi Ýle Çalýþacaðýný Öðrenir.
	scanf("%d",&yagcesidi);
	printf("\n");                            //Ve Dizinin Eleman Sayýsýný Tanýmlar, Deðiþkene Atar
	int i,j,k;
	float yag[yagcesidi-1];
	//printf("Yað Çeþidi: %d\n",yagcesidi);

	for(i=0; i<yagcesidi; i++) {                                             //For Döngüsüyle Kullanýlacak Yað Çeþitlerini
		//Gram Cinsinden Deðerlerini Tek Tek Alýr
		printf("%d. Yað Çeþidinin Gram Cinsinden Ölçüsü (X): ",i+1);
		fflush(stdin);
		scanf("%f",&yag[i]);
	}

	printf("\n");
	/*
		int f;                                                                 //Dizideki Deðerleri Bir Bir Ekrana Yazdýrýr
		for(f=0;f<yagcesidi;f++)
			printf("%d. Yað Çeþidinin Gram Cinsinden Ölçüsü: %d\n",f+1,yag[f]);
		printf("\n");
	*/

	float SAPDegeri[yagcesidi-1],kostikdegerleri[yagcesidi-1],kostikdegeri=0,sudegeri=0;

	for(j=0; j<yagcesidi; j++) {
		SAPDegeri[j] = 0;
		printf("%d. Yað Çeþidinin Sabunlaþma Deðerini Yazýnýz (0,0): ",j+1);
		fflush(stdin); //Yað Çeþitlerinin SAP Deðerini Alýr
		scanf("%f",&SAPDegeri[j]);

		//printf("%d. Yað Çeþidinin Sabunlaþma Deðeri: %.4f\n",j+1,SAPDegeri[j]); //Alýnan Sabunlaþma Deðerini Ekrana Yazdýrýr

		kostikdegerleri[j] = (yag[j]*SAPDegeri[j]);        											//Kullanýlan Yað Gramý Ve o Yaðýn Sabunlaþma Deðeri Çarpýlýr
	}

	for(k=0; k<yagcesidi; k+=2) {
		kostikdegeri += (kostikdegerleri[k] + kostikdegerleri[k+1]);  //Katýlacak Kostik Miktarý Hesaplanýr

		sudegeri += (yag[k]+yag[k+1]);                                //Katýlacak Su Miktarý Hesaplanýr
	}

	printf("\n");
	printf("Kullanýlacak NaOH(Kostik) Miktarý: %.4f gram\n",kostikdegeri); //Hesaplanan Kostik Ve Su Miktarý Ekrana Yazdýrýlýr
	printf("Kullanýlacak Su Miktarý: %.4f gram\n",sudegeri*0.38); //Hesaplanan Kostik Deðerini 0.38 ile Çarpýldý
	printf("Programý Bitirmek Ýçin Herhangi Bir Tuþa Basýn..."); getch();

}
