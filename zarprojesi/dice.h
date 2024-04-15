#ifndef _DICE_H
#define _DICE_H

class Dice
{
  public:
    Dice(int sides);           // yapý
    int Roll();                // zarý attýðýmýzda 1den zardaki yüz sayýsýna kadar ürettiðimiz random sayýyý döndürücek
    int NumSides() const;      // zarýn ne kadar yüzü var
    int NumRolls() const;      // zar ne kadar atýldý
    
  private: //sadece dice.cppnin kontrolündeki deðiþkenler 
    int myRollCount;           // # þuana kadar kaç kez atýldý
    int mySides;               // # sides on die
};

#endif    /* _DICE_H not defined */
