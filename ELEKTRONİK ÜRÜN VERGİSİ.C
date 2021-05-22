#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int fiyat;
    float sfiyat;
    int secim;

    printf("********************OYUN KONSOLU , TELEFON VEYA LAPTOP VERGISI HESAPLAMA ARACI********************\n\n");
    
    printf("hangi urunun vergisini hesaplamak istiyorsan yanindaki numarayi gir \n\n");
    printf("1-)telefon\n2-)oyun konsolu\n3-)laptop \n\n");
   
    printf("Secim:");
    scanf("%d",&secim);

    switch(secim)
    {

    case 1:
        printf("telefonun vergisiz fiyti nedir : ");
        scanf("%d",&fiyat);
        sfiyat=(fiyat*(0.5))+(fiyat*(0.18))+(fiyat*(0.1))+(fiyat*(0.1))+fiyat;
        printf("\ntelefonun vergili fiyati: %.3f \n",sfiyat);
        break;

    case 2:
        printf("oyun konsolunun vergisiz fiyti nedir : ");
        scanf("%d",&fiyat);
        sfiyat==(fiyat*(0.2))+(fiyat*(0.24))+(fiyat*(0.25))+fiyat;
        printf("\noyun konsolunun vergili fiyati: %.3f \n",sfiyat);
        break;

    case 3:
        printf("leptop'un vergisiz fiyti nedir : ");
        scanf("%d",&fiyat);
        sfiyat=fiyat*(0.18)+fiyat;
        printf("\nleptop'un vergili fiyati: %.3f \n",sfiyat );
        break;

    default:
        printf("\nHATALI TUSA BASTINIZ \n");

    }

    return 0;
}
