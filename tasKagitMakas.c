#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOYUT 3*3*3*3*3

char kullanicininSecimi(char hamle);
char bilgisayarinSecimi();
char oyunKurallari(char secim1,char secim2);
/* BURAK GÜL 20360859051*/


int main(){
    
   char kullanicininHamlesi;
   char kullanicininSecimleri[BOYUT];
   char bilgisayarinSecimleri[BOYUT];

   static int kullaniciSkoru=0;
   static int bilgisayarSkoru=0;
    
   unsigned int i ;

   printf(" TAŞ   İÇİN T \n KAĞIT İÇİN K \n MAKAS İÇİN M  HARFLERİNE BASINIZ \n");

   printf("\n \n \n ");
   

   for (size_t i = 0; i < BOYUT; i++)
   {
       printf("\n \n");
       printf(" HAMLENİZİ GİRİNİZ :");
       scanf(" %c",&kullanicininHamlesi);

       kullanicininSecimleri[i]=kullanicininSecimi(kullanicininHamlesi);
       bilgisayarinSecimleri[i]=bilgisayarinSecimi();

       printf("\n \n \n ");

       printf("KULLANİCİNİN HAMLESİ : %c \n",kullanicininSecimleri[i]);
       printf(" BİLGİSAYARIN HAMLESİ : %c \n",bilgisayarinSecimleri[i]);
       printf("\n");

       if (oyunKurallari(kullanicininSecimleri[i],bilgisayarinSecimleri[i])== kullanicininSecimleri[i])
       {
           kullaniciSkoru++;

            if (kullaniciSkoru==5)
            {
                printf(" TEBRİKLER OYUNU KAZANDINIZ \n");
                printf(" SKOR -------> KULLANİCİ : %d BİLGİSAYAR : %d \n",kullaniciSkoru,bilgisayarSkoru);
                break;
            }

            printf(" KULLANİCİ BU ELDE KAZANDI \n");
            printf(" SKOR -------> KULLANİCİ : %d BİLGİSAYAR : %d \n",kullaniciSkoru,bilgisayarSkoru);
            
       } 
        
       if (oyunKurallari(kullanicininSecimleri[i],bilgisayarinSecimleri[i])== bilgisayarinSecimleri[i] )
       {
           bilgisayarSkoru++;

           if (bilgisayarSkoru==5)
           {
               printf(" MAALESEF OYUNU KAYBETTİNİZ  \n");
               printf(" SKOR -------> KULLANİCİ : %d BİLGİSAYAR : %d \n",kullaniciSkoru,bilgisayarSkoru);
               break ;
           }



           printf(" BİLGİSAYAR  BU ELDE KAZANDI \n");
           printf(" SKOR -------> KULLANİCİ : %d BİLGİSAYAR : %d \n",kullaniciSkoru,bilgisayarSkoru);
           
       }

       if (oyunKurallari(kullanicininSecimleri[i],bilgisayarinSecimleri[i])=='B')
       {
           printf(" BU EL BERABERE KALDINIZ \n");
       }

   }
       printf("\n \n \n");


  for (size_t i = 0; i < BOYUT; i++)// BİLGİSAYAR VE KULLANİCİNİN HAMLELERİNİ EKRANA YAZDIRMA
   { 
       if ((kullanicininSecimleri[i]=='T' || kullanicininSecimleri[i]=='K' || kullanicininSecimleri[i]=='M') && (bilgisayarinSecimleri[i]=='T' || bilgisayarinSecimleri[i]=='K' || bilgisayarinSecimleri[i]=='M') )
       {
           printf("KULLANİCİNİN %d. HAMLESİ %c DİR.\t \t",(i+1),kullanicininSecimleri[i]);
           printf("BİLGİSAYARIN %d. HAMLESİ %c DİR.\n \n",(i+1),bilgisayarinSecimleri[i]);
       }
     
   }
   
    return 0 ;
}

char kullanicininSecimi(char hamle){
    if (hamle =='T' || hamle =='t') 
    {
        return 'T';
    }else if (hamle =='K' || hamle =='k') 
    {
        return 'K';
    }else if (hamle == 'M' || hamle =='m') 
    {
        return 'M';
    }else{
        printf(" HATALI TUŞ SEÇİMİ YENİDEN GİRİNİZ T K M GİREBİLİRSİNİZ SADECE :");
        char yeniHamle;
        scanf(" %c",&yeniHamle);
        return  kullanicininSecimi( yeniHamle);
    }



}

char bilgisayarinSecimi(){

    srand(time(0));
    int bilgisayarinHamlesi =rand()%3;

    if (bilgisayarinHamlesi==0) 
    {
        return 'T';
    }else if (bilgisayarinHamlesi==1) 
    {
        return 'K';
    }else if (bilgisayarinHamlesi==2)
    {
        return 'M';
    }

}

char oyunKurallari(char secim1,char secim2){

    if (secim1=='T')
    {
        if (secim2=='T')
        {
            return 'B';
        }else if (secim2=='K')
        {
            return 'K';
        }else if (secim2=='M')
        {
            return 'T';
        }
        
    }else if (secim1=='K')
    {
        if (secim2=='T')
        {
            return 'K';
        }else if (secim2=='K')
        {
            return 'B';
        }else if (secim2=='M')
        {
            return 'M'; 
        }
    
    }else if (secim1=='M')
    {
        if (secim2=='T')
        {
            return 'T';
        }else if (secim2=='K')
        {
            return 'M';
        }else if (secim2=='M')
        {
            return 'B';
        }
        
        
        
    }

}



