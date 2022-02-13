"""
değişken tanımlama
1- değişken isimleri sayı ile başlamaz
2- değişken isimleri kelime ile oluşturulduğunda aralarında boşluk olamaz
3- "_" dışındaki semboller değişken isimleri olarak kullanılamaz

"""
isim1="Burak"
isim2="GÜL"

print(isim1+isim2)#direkt yaptı
print(isim1+" "+isim2)#araya boşluk koyarsın
print(isim1,isim2)#arada virgül olunca her değişkenden sonra sep default (boşluk) koyar
print(isim1,isim2,sep="+")#sep i değiştirebilirsin
print(isim1,isim2,sep=" ")#sep default aslında " " dır
print(isim1,isim2,sep="123",end="...")#end ise en sona ne koyulacağını gösterir
print("\n")


print(2**4)#üs alma için ** kullanırız


 