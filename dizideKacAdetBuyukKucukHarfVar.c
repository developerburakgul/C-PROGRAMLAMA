#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int kacBuyukHarfVar(char *metin);
int kacKucukHarfVar(char *metin);
int kacTaneBoslukVar(char *metin);

int main(){

    char* metin="BURAK GUL 8 tane büyük harf kullanmıştır.";
    
    kacBuyukHarfVar(metin);
    char*metin2="BU CÜMLEDE 4 TANE KÜÇÜK harf KULLANILMIŞTIR.";
    kacKucukHarfVar(metin2);
    char *metin3="bu cümlede 5 tane boşluk vardır.";
    kacTaneBoslukVar(metin3);





    return 0 ;
}
int kacBuyukHarfVar(char *metin){
    int buyukHarfSayisi=0;
    int metinUzunlugu=strlen(metin);

    for (size_t i = 0; i < metinUzunlugu; i++)
    {
        if ((((int)*(metin+i))>=65) && (((int)*(metin+i)) <=90)) 
        {
            buyukHarfSayisi++;
        }
        
    }

    printf("metin de %d tane büyük harf vardır.\n",buyukHarfSayisi);
    return buyukHarfSayisi;
   

}
int kacKucukHarfVar(char *metin){
    int kucukHarfSayisi=0;
    int metinUzunlugu=strlen(metin);

    for (size_t i = 0; i < metinUzunlugu; i++)
    {
        if ((((int)*(metin+i))>=97) && (((int)*(metin+i)) <=122)) 
        {
            kucukHarfSayisi++;
        }
        
    }

    printf("metin de %d tane küçük harf vardır.\n",kucukHarfSayisi);
    return kucukHarfSayisi;

}
int kacTaneBoslukVar(char *metin){
    int boslukSayisi=0;
    int metinUzunlugu=strlen(metin);

    for (size_t i = 0; i < metinUzunlugu; i++)
    {
        if ((((int)*(metin+i))==32) ) 
        {
            boslukSayisi++;
        }
        
    }

    printf("metin de %d tane boşluk vardır.\n",boslukSayisi);
    return boslukSayisi;

}