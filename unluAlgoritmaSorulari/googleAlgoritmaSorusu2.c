#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Bize verilen bir sayı dizisinde 
 * her bir elemanın sağında olan 
 * ve ondan küçük olan elemanların sayısını gösteren bir dizi döndürün
 * 
 */


int main(){

    /**
     * VERİ YAPILARINDAN AĞAÇ İLE İLGİLİ OLAN ÇÖZÜMDE VAR BUNA 2.SINIFTA BAKACAĞIZ
     */

    
    /* 
    ÇÖZÜM 1
    srand(time(0));

    int dizi[8];
    int sonuc[8];

    for (size_t i = 0; i < 8; i++)
    {
        dizi[i] =rand()%11;
    }
    for (size_t i = 0; i < 8; i++)
    {
        printf("%d  ",dizi[i]);
    }
    printf("\n\n");

    for (size_t i = 0; i < 8; i++)
    {
        int sayac=0;
        for (size_t j = i+1; j < 8; j++)
        {
            if (dizi[i]>dizi[j]) 
            {
                sayac++;
            }
        }
        sonuc[i]=sayac;
    }

    for (size_t i = 0; i < 8; i++)
    {
        printf("%d  ",sonuc[i]);
    }
    */







    return 0;
}