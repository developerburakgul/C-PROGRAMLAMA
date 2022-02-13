#include <stdio.h>

/* girilen 2 sayının ebobunu özyinelemeli fonkisyon ile bulunuz*/
int ebob(int n1,int n2);

int main(){

    int n1,n2;

    printf("ebobunu bulmak istediğiniz 2 sayıyı giriniz : ");
    scanf("%d %d",&n1,&n2);
    printf("\n \n");

    printf("%d ile %d nin ebobu %d dir.",n1,n2,ebob(n1,n2));






    return 0 ;
}

int ebob(int n1,int n2){// ebob bulan fonksiyon ben kendim yaptım BURAK GÜL


    
    static int bolenSayi;
    static int kacDonguOldu=1;

    while (kacDonguOldu==1)
    {
        if (n1<n2)
    {
        bolenSayi=n1;
    }else if (n2<n1)
    {
        bolenSayi=n2;
    }else{
        bolenSayi=n1;
    }
    kacDonguOldu++;
    }
    
    

    if ((n1%bolenSayi)==0 && (n2%bolenSayi)==0)
    {
        return bolenSayi;
    }
    bolenSayi--;
    ebob(n1,n2);
    
    
    
    
    



    return bolenSayi;

}