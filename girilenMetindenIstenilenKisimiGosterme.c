#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *istenilenKisimiGosterme(char*metin);
// girilen bir dizide istenilen kısımdan itibaren istenilen karakter kadar ekrana yazdıran program
int main(){
    char metin[100];
    printf("metni giriniz :");
    
    gets(metin);
    

    istenilenKisimiGosterme(metin);
  
    






    return 0 ;
}

char *istenilenKisimiGosterme(char*metin){
    int baslangicDegeri,neKadarUzunluk;
    printf("kaçıncı karakterden başlamak istiyorsunuz ? : ");
    scanf("%d",&baslangicDegeri);
    printf("\n");
    printf("kaç karakter okumak istiyorsunuz ? : ");
    scanf("%d",&neKadarUzunluk);

    char *yeniMetin;
    for (size_t i = baslangicDegeri, j=0; i < (baslangicDegeri+neKadarUzunluk); i++,j++)
    {
        *(yeniMetin+j)=*(metin+i);
        
    }
    puts(yeniMetin);
    return yeniMetin;
    

}