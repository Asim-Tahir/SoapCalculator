#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char using_namespace_std;

 char bazyaziminiduzelt(char bazcesidi[4])
 {
			if(bazcesidi[0] == 'n')
 	  return bazcesidi[0] = 'N';
 	
 	 if(bazcesidi[1] == 'A')
 	  return bazcesidi[1] = 'a';
 	 
	  if(bazcesidi[2] == 'o') 
		  return bazcesidi[2] = 'O';
 	 	
		 if(bazcesidi[3] == 'h')
			 return bazcesidi[3] = 'H';
		
			
		 if(bazcesidi[0] == 'k')
    return bazcesidi[0] = 'K';
    
   if(bazcesidi[1] == 'o')
    return bazcesidi[1] = 'O';
   
   if(bazcesidi[2] == 'h')
    return bazcesidi[2] = 'H';
		}
 
 void yaggosterim()
 {
 	printf("S�v� Aloe Vera Ya��: SVALO | Kay�s� �ekirde�i Ya��: KYSCK | Kat� Avakado Ya��: KTAVK \n");
 	printf("S�v� Avakado Ya��: SVAVK | Balmumu Ya��: BLMMU | Hodan Ya��: HODAN | Kanola Ya��: KNOLA \n");
 	printf("Kanola Ya��(Y�ksek Aloik Asitli): KNLYA | Hint Ya��: HINTY | Kiraz �ekirde�i Ya��: KRZCK \n");
 	printf("Hindistan Cevizi Ya��: HNDCV | Doymu� Hindistan Cevizi Ya��: DHNCV | Tavuk Ya��: TAVUK \n");
 	printf("Kakao Ya��: KAKAO | M�s�r Ya��: MISIR | Pamuk Ya��: PAMUK | Emu Ya��: EMUYA | Ke�i Ya��: KECIY \n");
 	printf("Tamanu Tohumu Ya��: TMNUT | Bu�day Tohumu Ya��: BGDYT | Koyun Don Ya��: KYNDN | Kaz Ya��: KAZYG \n");
 	printf("�uha �i�e�i Ya��: CHCCK | Keten Tohumu Ya��: KTNTH | �z�m �ekirde�i Ya��: UZUMC | F�nd�k Ya��: FINDK \n");
 	printf("Kenevir Tohumu Ya��: KNVRT | Jojoba Tohumu Ya��: JOJOT | Kat� Aloe Vera Ya��: KTALO | Zeytin Ya��: ZYTIN \n");
		printf("Karite Ya��: KARIT | Kukui F�nd�k Ya��: KUKUI | Lanolin Ya��: LNOLN | Macademia F�nd�k Ya��: MCDMF \n");
 	printf("S�t Ya��: SUTYG | Vizon Ya��: VIZON | Neem A�ac� Ya��: NEEMA | Deve Ku�u Ya��: DEVEK | Geyik Don Ya��: GEYIK\n");
 	printf("Hurma �ekirde�i Ya��: HURMA | Palmiye Ya��: PALMY | �eftali �ekirde�i Ya��: SFTLI | F�st�k Ya��: FISTK \n");
		printf("�am Re�inesi: CMRCN | Kabak �ekirde�i Ya��: KABAK | Kolza Tohumu Ya��: KOLZA | Pirin� Kepe�i: PIRNC \n");
 	printf("Aspir Ya��(Y�ksek Linoleik Asit): ASPRL | Aspir Ya��(Y�ksek Oleik Asit): ASPRO | Susam Ya��: SUSAM \n");
 	printf("Shea Ya��: SHEAY | Soya Ya��: SOYAY | Soya Ya��(Hidrojenize Edilmi�): SOYAH |Ceviz Ya��: CEVIZ \n");
 	printf("Stearik Asit(Hayvandan): STRKH | Stearik Asit(Bitkiden): STRKB | Ay �i�e�i �ekirde�i Ya��: AYCCK \n");
 	printf("Tiare �i�e�i Ya��: TIARE | Ay �i�e�i �ekirde�i(Y�ksek Oleik Asit): AYCCO | S���r Don Ya��: SIGIR \n");
 	printf("Ay �i�ek Ya��: AYCCK | Badem Ya��: BADEM \n\n");
	}

int main()
 {
 	float ZYTIN,AYCCK,BADEM,KTALO,SVALO,KYSCK,KTAVK,SVAVK,BLMMU,HODAN,KNOLA,KNLYA,HINTY,KRZCK,TAVUK,KAKAO,HNDCV,DHNCV,MISIR,
		PAMUK,EMUYA,TMNUT,BGDYT,KYNDN,CHCCK,KTNTH,KECIY,KAZYG,UZUMC,FINDK,KNVRT,JOJOT,KARIT,KUKUI,LNOLN,MCDMF,SUTYG,VIZON,
		NEEMA,DEVEK,HURMA,PALMY,SFTLI,FISTK,CMRCN,KABAK,KOLZA,PIRNC,ASPRL,ASPRO,SUSAM,SHEAY,SOYAY,SOYAH,STRKH,STRKB,TIARE,
		CEVIZ,AYCCO,SIGIR,GEYIK;
		 	
	 setlocale(LC_ALL, "Turkish");                                //printf Fonksiyonu ��in T�rk�e Dil Deste�i
	 int yagcesidi,i,j,k,l;
		char bazcesidi[4]; [0] [1] [2] [3]  
	 baztekrar:

	 printf("Hangi Baz� Kullanacaks�n�z? (NaOH/KOH): "); fflush(stdin);
		scanf("%s",&bazcesidi); 
		bazyaziminiduzelt(bazcesidi);
		bazyaziminiduzelt(bazcesidi);
		bazyaziminiduzelt(bazcesidi);
		bazyaziminiduzelt(bazcesidi);
		bazcesidi[4] = '\0';
	 
		if(strcmp(bazcesidi,"NaOH") == 0)
		 {
	  	printf("Kulanaca��n�z Baz �e�idi: NaOH(Kostik)\n");
			 
				ZYTIN = 0.1353,
			 AYCCK = 0.1358,
			 BADEM = 0.1367,
			 KTALO = 0.1788,
			 SVALO = 0.1421,
			 KYSCK = 0.1378,
			 KTAVK = 0.1339,
		  SVAVK = 0.1337,
			 BLMMU = 0.0689,
			 HODAN = 0.1339,
			 KNOLA = 0.1328,
			 KNLYA = 0.1330,
			 HINTY = 0.1286,
			 KRZCK = 0.1389,
			 TAVUK = 0.1356,
		  KAKAO = 0.1378,
		  HNDCV = 0.1910,
			 DHNCV = 0.2321,
			 MISIR = 0.1368,
		  PAMUK = 0.1387,
		  EMUYA = 0.1377,
			 CHCCK = 0.1362,
			 KTNTH = 0.1358,
			 KECIY = 0.1382,
			 KAZYG = 0.1349,
			 UZUMC = 0.1321,
			 FINDK = 0.1369,
			 KNVRT = 0.1359,
			 JOJOT = 0.0695,
			 KARIT = 0.1296,
			 KUKUI = 0.1351,
			 LNOLN = 0.0748,
			 MCDMF = 0.1391,
			 SUTYG = 0.1599,
			 VIZON = 0.1403,
			 NEEMA = 0.1372,
			 DEVEK = 0.1385,
			 HURMA = 0.1777,
			 PALMY = 0.1420,
			 SFTLI = 0.1361,
			 FISTK = 0.1367,
			 CMRCN = 0.1298,
			 KABAK = 0.1389,
			 KOLZA = 0.1328,
			 PIRNC = 0.1284,
			 ASPRL = 0.1374,
			 ASPRO = 0.1369,
			 SUSAM = 0.1336,
			 SHEAY = 0.1296,
			 SOYAY = 0.1359,
			 SOYAH = 0.1361,
			 STRKH = 0.1413,
			 STRKB = 0.1411,
			 AYCCK = 0.1358,
			 AYCCO = 0.1351,
			 SIGIR = 0.1419,
			 GEYIK = 0.1382,
			 KYNDN = 0.1384,
			 TMNUT = 0.1437,
			 TIARE = 0.1796,
			 CEVIZ = 0.1349,
			 BGDYT = 0.1319;
 		}
	 
	 else if(strcmp(bazcesidi,"KOH") == 0)
	  {
	 	 printf("Kulanaca��n�z Baz �e�idi: KOH(Potasyum Kostik)\n");
			 ZYTIN = 0.1906,
			 AYCCK = 0.1913,
			 BADEM = 0.1925,
			 KTALO = 0.2518,
		  SVALO = 0.2001,
		  KYSCK = 0.1941,
		  KTAVK = 0.1886,
		  SVAVK = 0.1883,
		  BLMMU = 0.0970,
		  HODAN = 0.1886,
			 KNOLA = 0.1870,
			 KNLYA = 0.1873,
			 HINTY = 0.1811,
			 KRZCK = 0.1956,
			 TAVUK = 0.1910,
		  KAKAO = 0.1941,
		  HNDCV = 0.2690,
			 DHNCV = 0.3269,
			 MISIR = 0.1927,
		  PAMUK = 0.1954,
		  EMUYA = 0.1939,
			 CHCCK = 0.1918,
			 KTNTH = 0.1913,
			 KECIY = 0.1946,
			 KAZYG = 0.1900,
			 UZUMC = 0.1861,
			 FINDK = 0.1928,
			 KNVRT = 0.1914,
			 JOJOT = 0.0979,
			 KARIT = 0.1825,
			 KUKUI = 0.1903,
			 LNOLN = 0.1054,
			 MCDMF = 0.1959,
			 SUTYG = 0.2252,
			 VIZON = 0.1976,
			 NEEMA = 0.1932,
	   DEVEK = 0.1951,
	   HURMA = 0.2503,
	   PALMY = 0.2000,
	   SFTLI = 0.1917,
	   FISTK = 0.1925,
	   CMRCN = 0.1820,
	   KABAK = 0.1956,
	   KOLZA = 0.1870,
	   PIRNC = 0.1808,
	   ASPRL = 0.1935,
	   ASPRO = 0.1928,
	   SUSAM = 0.1882,
	   SHEAY = 0.1825,
	   SOYAY = 0.1914,
	   SOYAH = 0.1917,
	   STRKH = 0.1990,
	   STRKB = 0.1987,
	   AYCCK = 0.1913,
	   AYCCO = 0.1903,
			 SIGIR = 0.1999,
			 GEYIK = 0.1946,
			 KYNDN = 0.1949,
			 TMNUT = 0.2024,
			 TIARE = 0.2530,
			 CEVIZ = 0.1900,
			 BGDYT = 0.1858;
 	 }
		
  else
	  {
	   printf("Yanl�� Baz Giri�i  Tekrar Deneyiniz... "); getch();
	   system("cls");
		  goto baztekrar;
   }
	
	 printf("Ka� Ya� �e�idi �le �al��acaks�n�z (n): "); fflush(stdin); //Kullan�c�n�n Ka� Ya� �e�idi �le �al��aca��n� ��renir.
	 scanf("%d",&yagcesidi); printf("\n");                            //Ve Dizinin Eleman Say�s�n� Tan�mlar, De�i�kene Atar
	 float yag[yagcesidi];
	 //printf("Ya� �e�idi: %d\n",yagcesidi);
	 yagkodutekrar:
	 yaggosterim();
	 char yagkodu[yagcesidi][6];																																									
		
		for(i=0;i<yagcesidi;i++)                  
		{			
			printf("Se�ti�iniz %d. Ya� �e�idinin Kodunu Giriniz: ",i+1); fflush(stdin);
			scanf("%s",&yagkodu[i]);	j=4;
			(char*)strupr(yagkodu[i]); yagkodu[i][++j]='\0';
			//printf("%d.Ya� Kodu: %s\n",i+1,yagkodu[i]);			
  }
  printf("\n");
  
	 for(i=0;i<yagcesidi;i++)
	 {                                           
		 printf("%s Ya��n�n Gram Cinsinden �l��s� (X g): ",yagkodu[i]); fflush(stdin);
			scanf("%f",&yag[i]);
	 }
	 printf("\n");
	                                                        
	 /*for(i=0;i<yagcesidi;i++)																																					//Ya�lar�n Gram De�erlerini Ekrana Yazd�r�r
 	 printf("%s. Ya� �e�idinin Gram Cinsinden �l��s�: %.4f\n",yagkodu[i],yag[i]);
	 printf("\n");*/

	 float SAPDegeri[yagcesidi],kostikdegerleri[yagcesidi],kostikdegeri=0,sudegeri=0;

	 for(j=0;j<yagcesidi;j++)
	 {
		 SAPDegeri[j] = 0;
					
			 if(strcmp(yagkodu[j],"ZYTIN")==0)
			  SAPDegeri[j] = ZYTIN;
			 else if(strcmp(yagkodu[j],"AYCCK")==0)
			  SAPDegeri[j] = AYCCK;
		  else if(strcmp(yagkodu[j],"BADEM")==0)
			  SAPDegeri[j] = BADEM;
		  else if(strcmp(yagkodu[j],"KTALO")==0)
			  SAPDegeri[j] = KTALO;
		  else if(strcmp(yagkodu[j],"SVALO")==0)
			  SAPDegeri[j] = SVALO;
		  else if(strcmp(yagkodu[j],"KYSCK")==0)
			  SAPDegeri[j] = KYSCK;
		  else if(strcmp(yagkodu[j],"KTAVK")==0)
			  SAPDegeri[j] = KTAVK;
		  else if(strcmp(yagkodu[j],"SVAVK")==0)
			  SAPDegeri[j] = SVAVK;
		  else if(strcmp(yagkodu[j],"BLMMU")==0)
			  SAPDegeri[j] = BLMMU;
		  else if(strcmp(yagkodu[j],"HODAN")==0)
			  SAPDegeri[j] = HODAN;
		  else if(strcmp(yagkodu[j],"KNOLA")==0)
			  SAPDegeri[j] = KNOLA;
		  else if(strcmp(yagkodu[j],"KNLYA")==0)
			  SAPDegeri[j] = KNLYA;
		  else if(strcmp(yagkodu[j],"HINTY")==0)
			  SAPDegeri[j] = HINTY;
		  else if(strcmp(yagkodu[j],"KRZCK")==0)
			  SAPDegeri[j] = KRZCK;
		  else if(strcmp(yagkodu[j],"TAVUK")==0)
			  SAPDegeri[j] = TAVUK;
		  else if(strcmp(yagkodu[j],"KAKAO")==0)
			  SAPDegeri[j] = KAKAO;
		  else if(strcmp(yagkodu[j],"HNDCV")==0)
			  SAPDegeri[j] = HNDCV;
		  else if(strcmp(yagkodu[j],"DHNCV")==0)
			  SAPDegeri[j] = DHNCV;
		  else if(strcmp(yagkodu[j],"MISIR")==0)
			  SAPDegeri[j] = MISIR;
		  else if(strcmp(yagkodu[j],"PAMUK")==0)
			  SAPDegeri[j] = PAMUK;
		  else if(strcmp(yagkodu[j],"EMUYA")==0)
			  SAPDegeri[j] = EMUYA;
		  else if(strcmp(yagkodu[j],"TMNUT")==0)
			  SAPDegeri[j] = TMNUT;
		  else if(strcmp(yagkodu[j],"BGDYT")==0)
			  SAPDegeri[j] = BGDYT;
		  else if(strcmp(yagkodu[j],"KYNDN")==0)
			  SAPDegeri[j] = KYNDN;
		  else if(strcmp(yagkodu[j],"CHCCK")==0)
			  SAPDegeri[j] = CHCCK;
		  else if(strcmp(yagkodu[j],"KTNTH")==0)
			  SAPDegeri[j] = KTNTH;
		  else if(strcmp(yagkodu[j],"KECIY")==0)
			  SAPDegeri[j] = KECIY;
		  else if(strcmp(yagkodu[j],"KAZYG")==0)
			  SAPDegeri[j] = KAZYG;
		  else if(strcmp(yagkodu[j],"UZUMC")==0)
			  SAPDegeri[j] = UZUMC;
		  else if(strcmp(yagkodu[j],"FINDK")==0)
			  SAPDegeri[j] = FINDK;
		  else if(strcmp(yagkodu[j],"KNVRT")==0)
			  SAPDegeri[j] = KNVRT;
		  else if(strcmp(yagkodu[j],"JOJOT")==0)
			  SAPDegeri[j] = JOJOT;
		  else if(strcmp(yagkodu[j],"KARIT")==0)
			  SAPDegeri[j] = KARIT;
		  else if(strcmp(yagkodu[j],"KUKUI")==0)
			  SAPDegeri[j] = KUKUI;
		  else if(strcmp(yagkodu[j],"LNOLN")==0)
			  SAPDegeri[j] = LNOLN;
		  else if(strcmp(yagkodu[j],"MCDMF")==0)
			  SAPDegeri[j] = MCDMF;
		  else if(strcmp(yagkodu[j],"SUTYG")==0)
			  SAPDegeri[j] = SUTYG;
		  else if(strcmp(yagkodu[j],"VIZON")==0)
			  SAPDegeri[j] = VIZON;
			 else if(strcmp(yagkodu[j],"NEEMA")==0)
			  SAPDegeri[j] = NEEMA;
		  else if(strcmp(yagkodu[j],"DEVEK")==0)
			  SAPDegeri[j] = DEVEK;
		  else if(strcmp(yagkodu[j],"HURMA")==0)
			  SAPDegeri[j] = HURMA;
		  else if(strcmp(yagkodu[j],"PALMY")==0)
			  SAPDegeri[j] = PALMY;
		  else if(strcmp(yagkodu[j],"SFTLI")==0)
			  SAPDegeri[j] = SFTLI;
		  else if(strcmp(yagkodu[j],"FISTK")==0)
			  SAPDegeri[j] = FISTK;
		  else if(strcmp(yagkodu[j],"CMRCN")==0)
			  SAPDegeri[j] = CMRCN;
		  else if(strcmp(yagkodu[j],"KABAK")==0)
			  SAPDegeri[j] = KABAK;
		  else if(strcmp(yagkodu[j],"KOLZA")==0)
			  SAPDegeri[j] = KOLZA;
		  else if(strcmp(yagkodu[j],"PIRNC")==0)
			  SAPDegeri[j] = PIRNC;
		  else if(strcmp(yagkodu[j],"ASPRL")==0)
			  SAPDegeri[j] = ASPRL;
		  else if(strcmp(yagkodu[j],"ASPRO")==0)
			  SAPDegeri[j] = ASPRO;
		  else if(strcmp(yagkodu[j],"SUSAM")==0)
			  SAPDegeri[j] = SUSAM;
		  else if(strcmp(yagkodu[j],"SHEAY")==0)
			  SAPDegeri[j] = SHEAY;
		  else if(strcmp(yagkodu[j],"SOYAY")==0)
			  SAPDegeri[j] = SOYAY;
		  else if(strcmp(yagkodu[j],"SOYAH")==0)
			  SAPDegeri[j] = SOYAH;
		  else if(strcmp(yagkodu[j],"STRKH")==0)
			  SAPDegeri[j] = STRKH;
		  else if(strcmp(yagkodu[j],"STRKB")==0)
			  SAPDegeri[j] = STRKB;
		  else if(strcmp(yagkodu[j],"TIARE")==0)
			  SAPDegeri[j] = TIARE;
		  else if(strcmp(yagkodu[j],"CEVIZ")==0)
		   SAPDegeri[j] = CEVIZ;
				
		//else if(strcmp(yagkodu[j],"ABCD")==0)
		// SAPDegeri[j] = YA�INADI;

		 //printf("%s Ya��n�n Sabunla�ma De�eri(SAP): %.4f\n",yagkodu[j],SAPDegeri[j]); //Al�nan Sabunla�ma De�erini Ekrana Yazd�r�r

		 kostikdegerleri[j] = (yag[j]*SAPDegeri[j]);        											//Kullan�lan Ya� Gram� Ve o Ya��n Sabunla�ma De�eri �arp�l�r
	 }

	 for(k=0; k<yagcesidi; k+=2)
   {
    kostikdegeri += (kostikdegerleri[k] + kostikdegerleri[k+1]);  //Kat�lacak Kostik Miktar� Hesaplan�r
    sudegeri += (yag[k]+yag[k+1]);                                //Kat�lacak Su Miktar� Hesaplan�r
   }

  printf("\n");
	 printf("Kullan�lacak %s%s Miktar�: %.4f gram\n",bazcesidi,strcmp(bazcesidi,"KOH")==0? "(Potasyum Kostik)":"(Kostik)",kostikdegeri); //Hesaplanan Kostik Ve Su Miktar� Ekrana Yazd�r�l�r
	 printf("Kullan�lacak Su Miktar�: %.4f gram\n",sudegeri*0.38); //Hesaplanan Kostik De�erini 0.38 ile �arp�ld�
	 
		printf("\nBitirmek ��in Herhangi Bir Tu�a Bas�n�z..."); getch();
		//return EXIT_SUCCESS;		
}
