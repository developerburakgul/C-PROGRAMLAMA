#include <stdio.h>
#include <string.h>
/**
 * bize bir sayı dizisi veriliyor
 * dizideki her elemanın yerinde,o eleman harici tüm elemanların çarpımını içeren bir dizi döndürün
 * BONUS : bunu bölme işlemi yapmadan nasıl yaparsınız ?
 */

int main()
{
    /*
    BÖLMESİZ YAPILAN BU
    int liste[5] = {1, 2, 3, 4, 5};
    int sonuc[5];
    

    for (size_t a = 0; a < 5; a++)
    {
        int carpim = 1;
        int cmp;
        cmp=liste[0];
        liste[0]=liste[a];
        liste[a]=cmp;

        for (size_t i = 1; i < 5; i++)
        {
            carpim = carpim * liste[i];
        }

        sonuc[a]=carpim;

    }

    for (size_t i = 0; i < 5; i++)
    {
        printf("%d\t", sonuc[i]);
    }
    */



    /*
    BÖLMELİ YAPILAN BU YAPILAN BU
    int liste[5]={1,2,3,4,5};
    int sonuc[5];
    int carpim=1;

    for (size_t i = 0; i < 5; i++)
    {
        carpim=carpim*liste[i];
    }
    printf("%d\n",carpim);

    for (size_t i = 0; i < 5; i++)
    {
        sonuc[i]=carpim/liste[i];
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d \t",sonuc[i]);
    }
    */

    return 0;
}