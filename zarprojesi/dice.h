#ifndef _DICE_H
#define _DICE_H

class Dice
{
  public:
    Dice(int sides);           // yap�
    int Roll();                // zar� att���m�zda 1den zardaki y�z say�s�na kadar �retti�imiz random say�y� d�nd�r�cek
    int NumSides() const;      // zar�n ne kadar y�z� var
    int NumRolls() const;      // zar ne kadar at�ld�
    
  private: //sadece dice.cppnin kontrol�ndeki de�i�kenler 
    int myRollCount;           // # �uana kadar ka� kez at�ld�
    int mySides;               // # sides on die
};

#endif    /* _DICE_H not defined */
