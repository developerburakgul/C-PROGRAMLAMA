#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//bir metindeki kelime sayisini yazdiran program 
int kacKelimeVar(char*metin);

int main(){
    
    char *metin="Every sentence requires at least a verb and a subject";
    printf("metin : %s \n",metin);
    
    kacKelimeVar(metin);





    return 0 ;
}
int kacKelimeVar(char*metin){
    int metinUzunlugu=strlen(metin);
    int kelimeSayisi=0;
    for (size_t i = 0; i < metinUzunlugu; i++)
    {
        if (((metin[i]>=65 && metin[i]<=90)||(metin[i]>=97 &&metin[i]<=122)) &&( (metin[i+1]==32) || metin[i+1]=='\0'||metin[i+1]==46))
        {
            kelimeSayisi++;
        }
        
    }
    printf("metinde %d tane kelime var",kelimeSayisi);
    return kelimeSayisi;
    






}