#include "dice.h"
#include "randgen.h"


Dice::Dice(int sides)
// �zel olan de�i�kenler y�kleniyor  (privite)  
{
    myRollCount = 0; //�uana kadar yapt���m�z d�nd�rme say�s�
    mySides = sides; //zar�m�z�n ka� y�zl� oldu�unu belirtmek i�in kullan�r�z
}

int Dice::Roll()
// zar atma say�m�z� de�i�tirme i�lemi
// zar att���m�zda gelebilecek y�z�n numaras�n� randgen.h k�t�phanesindeki gen.RandInt fonksiyonuyla d�nd�r�yoruz    
{
    RandGen gen;    // random number generator
    
    myRollCount= myRollCount + 1;         // toplam d�n�d�rme say�m�z� 1 artt�r�yor yani bir saya� gibi �al���yor 
    return gen.RandInt(1,mySides);        // 1'Den bizim girdi�imiz(att���m�z) zar�n y�z say�s�na kadar bir int(tam say� ) de�i�keni olu�turur
}

int Dice::NumSides() const
   
{
    return mySides;  // zar�m�z�n ka� y�z� oldu�unu d�nd�r�r
 }

int Dice::NumRolls() const
//�uana kadar ka� kere zar att���m�z� d�nd�r�r
{
    return myRollCount;
}

