#include <stdio.h>


/*
Bir sayının istenen bir kuvvetini özyineli fonksiyon ile bulan bir C
programı yazınız.
*/
int usAlma(int n1, int n2);
int main(){

    int n1,n2;

    printf("üssünü almak istediğiniz sayıyı ( tabanı ) giriniz : \n");
    scanf("%d",&n1);
    
    printf("üssünü almak istediğiniz sayıyının üssünü  giriniz : \n");
    scanf("%d",&n2);

    printf("%d nin %d. kuvveti %d dir ",n1,n2, usAlma(n1,n2));
    





    return 0 ;
}


    int usAlma(int n1, int n2){

    if ( n2==1)
    {
        return n1;
    }else if (n1==1 )
    {
        return 1;
    }else if (n1==0)
    {
        if (n2==0)
        {
            printf("tanımsız bir sayı girdiniz \n");
            
        }
        
        return 0;
    }else if (n2==0)
    {
        if (n1==0)
        {
            printf("tanımsız bir sayı girdiniz \n");
           
            
        }

        return 1;
    }

    return ((usAlma(n1,(n2-1)))*n1);
    
    
    
    
    








}