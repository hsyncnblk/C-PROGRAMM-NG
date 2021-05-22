#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;
    int yatir;
    int cek;
    int bakiye=5000;
    
   

    while(secim)
    {
        printf("1-Toplam bakiye \n");
        printf("2-Para Cek\n");
        printf("3-Para Yatir\n");
        printf("4-Cikis\n");
        printf("yapmak istediginiz islemi seciniz: ");
        scanf("%d",&secim);
        switch(secim)
        {
        
        case 1:
            printf("Bakiyeniz : %d\n",bakiye);
            break;
        
        case 2:
            printf("ne kadar para cekmek istiyorsun : \n");
            scanf("%d",&cek);
            if(cek>bakiye)
            {
                printf("bakiyeniz yeterli degil :( \n");
            }
            else
            {
                printf("para çekildi lütfen kartinizi almayi unutmayin\n");
                bakiye=bakiye-cek;
                printf("kalan bakiye: %d\n",bakiye);

            }
            break;
            
            case 3:
            printf("ne kadar yatirmak istiyorsun : \n");
            scanf("%d",&yatir);
            printf("para yatirildi.\n");
            bakiye=bakiye+yatir;
            printf("toplam bakiye : %d\n",bakiye);
            break;
            
            case 4:
            break;
            
        default:
            printf("hatalı islem \n");
            break;
        }

    }


    return 0;
}
