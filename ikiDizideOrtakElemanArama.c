#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ortakElemanlariBulanFonksiyon(int dizi1[],int dizi2[],int ortakElemanDizisi[],int donguSayisi);

int main(){
    

    int dizi1[50];
    int dizi2[50];
    int ortakElemanDizisi[51];
    int n=50;
    int i,j;

    srand(time(0));

    for (size_t i = 0; i < n; i++)
    {
        dizi1[i]=rand()%10001;
        dizi2[i]=rand()%10001;
    }

    for (size_t i = 0; i < n+1; i++)
    {
        ortakElemanDizisi[i]=-1;
    }


    printf("1.dizimiz şudur : \n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ",dizi1[i]);
    }

    printf("\n \n");
    printf("2.dizimiz şudur : \n");

    for (size_t i = 0; i < n; i++)
    {
        printf("%d ",dizi2[i]);
    }
    printf("\n \n");

    



    ortakElemanlariBulanFonksiyon(dizi1,dizi2,ortakElemanDizisi,n);






    
    


    
    





    return 0 ;
}


void ortakElemanlariBulanFonksiyon(int dizi1[],int dizi2[],int ortakElemanDizisi[],int donguSayisi){
    int i,j,k,sayac=0;


    for (size_t i = 0; i < donguSayisi; i++)//ilk dizinin elemanlari için
    {
        for ( k = 0; k < i; k++)
        {
            if (dizi1[k]==dizi1[i])
            {
                break;
            }
            
        }
        if (k!=i)//k i ye ulaşamadan döngüden çıktıysa yani k ile i aynı değeri gösterdilerse i yi bir artırdık ya da alt tarafı es geçtik
        {
            //i++;
            continue;
        }
        
        

        for (j  = 0; j < donguSayisi; j++)
        {
            if (dizi1[i]==dizi2[j]) 
            {
             ortakElemanDizisi[sayac]=dizi2[j];
             sayac++;
             break;  
            }
            
        }
        
    }

    if (ortakElemanDizisi[0]==-1) 
    {
        printf("BU DİZİDE HİÇ ORTAK ELEMAN YOK....");
    }else{


        printf("DİZİNİN ORTAK ELEMANLARI : \n");
        for (size_t i = 0; i < donguSayisi; i++)
        {

            if (ortakElemanDizisi[i]==-1)
            {
                break;
            }else{
                printf("%d ",ortakElemanDizisi[i]);
            }
            
            

        }
        
    }
    
    






}