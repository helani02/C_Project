
#include <stdio.h>

int main() {
  float bakiye=5000,tutar;
  int islem;
	int kullanicisifresi=2323;
  int sifre;
  int sifredeneme=0;

  printf("\n\t\t***Banka Hesap Sistemi***\n");  
  printf("\t\t==========================\n");

  while(sifredeneme<=3)//sifre 3 kez yanlis girerse sistem kapanacak dogru girerse devam edecek...
  {
    printf("\nLutfen Sifreniz Giriniz: ");
    scanf("%d",&sifre);

    if(sifre==kullanicisifresi){
      printf("\n\t\t\t***ISLEMLER***\n");
	    printf("\t\t\t===============\n\n");
    	printf(" 1. Para Bakiye Sorgulama.\n");
	    printf(" 2. Hesaba Para Yatirma.\n");
	    printf(" 3. Hesaptan Para Cekme.\n");
	    printf(" 4. Kart Iade.\n");

     while(islem != 4){
     printf("\nLutfen Isleminizi Giriniz: ");
     scanf("%d",&islem);
        
    switch(islem)
    {
    case 1:
      printf("Bakiyeniz : %2.f\n",bakiye);//secenek 1- bakiye sorgulamak icin
      printf("---------------------------------------");
      break;  

    case 2:
      printf("\nYatirmak Istediginiz Tutari giriniz : ");//secenek 2- hesaba para yatirmak icin 
      scanf("%f",&tutar);
      bakiye = bakiye + tutar;
      printf("Yeni Bakiyeniz : %.2f\n",bakiye);
      printf("---------------------------------------");
      break;

    case 3:
      printf("\nCekmek Istediginiz Tutari Giriniz : ");//secenek 3- hesaptan para cekmek icin
      scanf("%f",&tutar);
      while(1)
      {
        if(tutar>bakiye){
        printf("Yetersiz Bakiye Tekrar Giriniz! ");//bakiyeden fazla bir tutar cekmek isterse uyari verir ve tekrar bir tutar istenecek..
        scanf("%f",&tutar);
        }
        else{
        bakiye = bakiye - tutar;
        printf("Yeni Bakiyeniz : %.2f\n",bakiye);//para cektikten sonra kalan bakiye gostermek.
        printf("---------------------------------------");
        break;    
        }
      } 
    }
  }
  printf("\nkartiniz alabilirsiniz.\niyi gunler.");//secenek 4- karti atm den cikartmak icin.
  break;
}
    else if(sifre != kullanicisifresi){
      printf("\nYanlis Sifre Girdiniz. \n");
      sifredeneme++;
    }
    if(sifredeneme==3)//program mesaj verdikten sonra kapanacak..
    {
      printf("\n**3 kez yanlis sifre girdiginiz icin herhangi bir islem yapilmamaktadir.**\n\n");
      printf("**Kartiniz bankadaki calisanlardan kimliginiz gosterip iade edebilirsiniz.**");
      break;
    }
  }
  return 0;
}