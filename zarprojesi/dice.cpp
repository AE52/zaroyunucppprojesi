#include "dice.h"
#include "randgen.h"


Dice::Dice(int sides)
// özel olan deðiþkenler yükleniyor  (privite)  
{
    myRollCount = 0; //þuana kadar yaptýðýmýz döndürme sayýsý
    mySides = sides; //zarýmýzýn kaç yüzlü olduðunu belirtmek için kullanýrýz
}

int Dice::Roll()
// zar atma sayýmýzý deðiþtirme iþlemi
// zar attýðýmýzda gelebilecek yüzün numarasýný randgen.h kütüphanesindeki gen.RandInt fonksiyonuyla döndürüyoruz    
{
    RandGen gen;    // random number generator
    
    myRollCount= myRollCount + 1;         // toplam dönüdürme sayýmýzý 1 arttýrýyor yani bir sayaç gibi çalýþýyor 
    return gen.RandInt(1,mySides);        // 1'Den bizim girdiðimiz(attýðýmýz) zarýn yüz sayýsýna kadar bir int(tam sayý ) deðiþkeni oluþturur
}

int Dice::NumSides() const
   
{
    return mySides;  // zarýmýzýn kaç yüzü olduðunu döndürür
 }

int Dice::NumRolls() const
//þuana kadar kaç kere zar attýðýmýzý döndürür
{
    return myRollCount;
}

