#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define PI 3.14
int main(void) {
    int islem;
    int kareKenar,dikdUzunKenar,dikdKısaKenar;
    int dikKenar1,dikKenar2,eskKenar;
    int kareAlan,dikdAlan;
    int cesKenar1,cesKenar2,cesKenar3;
    int yaricap;
    float dikAlan,eskAlan,cesAlan,cesCevre;
    float daireAlan,daireCevre;
    char devam = 'e';
    
    //İşlemleri tek tek yazdık
    printf("********************ALAN HESAPLAMA********************\n\n");
    printf("1. Kare Alanı Hesapla\n2. Dikdörtgen Alanı Hesapla\n3. Dik Uçgen Alanı Hesapla\n"
           "4. Eşkenar Üçgen Alanı Hesapla\n5. Çeşitkenar Uçgeni Alanı Hesapla\n6. Dairenin Alanını ve Cevresini Hesapla\n\n");
    
    // Devam e olduğu sürece while döngüsüne devam et
    while (devam == 'e') {
        
        printf("İşleminizi seçiniz : ");
        scanf("%d",&islem);
        
        switch(islem){
            case 1:
                //Kare'nin alanını hesapladık
                printf("Kare'nin bir kenarını giriniz : ");
                scanf("%d",&kareKenar);
                kareAlan=pow(kareKenar,2);
                printf("Kare'nin Alanı = %d\n",kareAlan);
                break;
            case 2:
                //Dikdörtgen'in alanını hesapladık
                printf("Dikdörtgen'in uzun kenarını giriniz : ");
                scanf("%d",&dikdUzunKenar);
                printf("Dikdörtgen'in kısa kenarını giriniz : ");
                scanf("%d",&dikdKısaKenar);
                dikdAlan=dikdUzunKenar*dikdKısaKenar;
                printf("Dikdörtgen'in Alanı = %d\n",dikdAlan);
                break;
            case 3:
                //Dik Üçgen'in alanını hesapladık
                printf("Dik üçgen'in dik kenarını giriniz : ");
                scanf("%d",&dikKenar1);
                printf("Dik üçgen'in dik kenarını giriniz : ");
                scanf("%d",&dikKenar2);
                dikAlan=(float)(dikKenar1*dikKenar2)/2.0;
                printf("Dik Uçgen'in Alanı = %.2f\n",dikAlan);
                break;
            case 4:
                //Eşkenar Üçgen'in alanını hesapladık
                printf("Eşkenar üçgen'in kenarını giriniz : ");
                scanf("%d",&eskKenar);
                eskAlan=(((float)eskKenar*(float)eskKenar)*sqrt(3))/4.0;
                printf("Eşkenar Uçgen'in Alanı = %.2f\n",eskAlan);
                break;
            case 5:
                //Çeşitkenar Üçgen'in alanını hesapladık
                printf("Çeşitkenar üçgen'in birinci kenarını giriniz : ");
                scanf("%d",&cesKenar1);
                printf("Çeşitkenar üçgen'in ikinci kenarını giriniz : ");
                scanf("%d",&cesKenar2);
                printf("Çeşitkenar üçgen'in ücüncü kenarını giriniz : ");
                scanf("%d",&cesKenar3);
                cesCevre=(cesKenar1+cesKenar2+cesKenar3)/2.0;
                cesAlan=sqrtf((cesCevre*(cesCevre-cesKenar1)*(cesCevre-cesKenar2)*(cesCevre-cesKenar3)));
                printf("Çeşitkenar Ucgen'in Alanı = %.2f\n",cesAlan);
                break;
            case 6:
                //Daire'nin çevresini ve alanını hesapladık
                printf("Daire'nin yarıçapını giriniz : ");
                scanf("%d",&yaricap);
                daireCevre=2*PI*yaricap;
                daireAlan=PI*yaricap*yaricap;
                printf("Daire'nin Çevresi = %.2f\n",daireCevre);
                printf("Daire'nin Alanı = %.2f\n",daireAlan);
                break;
            default:
                printf("Geçersiz bir işlem girdiniz!!\n");
                break;
        }
        printf("\n");
        //Devam edip etmedğinini sormakta 'e' harfini bastığın sürece işleme devam edebiliyorsun.
        printf("Devam etmek istiyor musunuz(Evet:e- Hayır:h)?:");
        scanf("%s",&devam);
        printf("\n");
    }
    printf("\n");
    return 0;
}
