#include <stdio.h> 

int id, Secime , Adet , kisi_flag , toplam_fiyat ;
int fiyat ;

void main()
{

    printf("Merhaba, Lutfen ID'nizi giriniz\t");
    scanf("%d", &id);

    if (50 < id < 150 && id % 5 == 0)
    {
        kisi_flag = 1;
    }
    else if (3000 < id < 3600 && id % 3 == 0)
    {
        kisi_flag = 0;
    }

        printf("HOSGELDINIZ\n");
        if (kisi_flag == 1)
        {
            printf(" Su icin 1 e basin 1TL\n");
            printf(" Cikolata icin 2'ye basin 2TL\n");
            printf(" Maske icin 3'e basin 1TL\n");
        }
        else if (kisi_flag == 0)
        {
            printf(" Su icin 1 e basin 1.5 TL\n");
            printf(" Cikolata icin 2'ye basin 3TL\n");
            printf(" Maske icin 3'e basin 1TL\n");
        }

        printf("lutfen bir secinik secin ");
        scanf("%d", &Secime);
        switch (Secime)
        {
        case 1:
            printf("fiyat giriniz ");
            scanf("%d", &fiyat);
            printf("Adet giriniz ");
            scanf("%d", &Adet);
            break;
        }
        case 2:
            printf("fiyat giriniz ");
            scanf("%d", &fiyat);
            printf("Adet giriniz ");
            scanf("%d", &Adet);
            break;
        }
        case 3:
            printf("fiyat giriniz ");
            scanf("%d", &fiyat);
            printf("Adet giriniz ");
            scanf("%d", &Adet);
            break;
        }
            printf("odenecek miktari = ",Adet*fiyat);
}