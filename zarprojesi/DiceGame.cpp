#include <iostream>
#include <string>
#include "dice.h"
#include "randgen.h"
using namespace std;



int main() {
    string giris = ""; 

    cin >> giris;
    int giris_sayi = stoi(giris);
    Dice player1(giris_sayi); //zarýn kaç yüzlü olduðu
    Dice player2(giris_sayi);
    int p1_score = 0, p2_score = 0; // player 1 score = oyuncu 1 skoru player 2 score = oyuncu 2 skoru
    int finishing_threshold = 30, cur_score; // finishing threshold = oyunun kaçta biticeði//oyunu 20ye ulaþan kazansýn istiyoruz // cur_scorede oyuncunun her tur kazandýðý puaný tutmak için
    while(p1_score < finishing_threshold && p2_score < finishing_threshold) // && ve anlamýna gelmekte ve ikiside doðru olursa þart saðlanýr birtanesi bile doðru olmazsa while döngüsüne girmez
    {
        cur_score = player1.Roll();
        p1_score += cur_score; //
        cout << "1. oyuncu zar atti " << cur_score << " puan kazandi " << p1_score <<  " toplam puani " << endl;
        if(p1_score >= finishing_threshold)
        {
            cout << " 1. oyuncu " << finishing_threshold <<" puana ulasti ve oyuni kazandi " << endl;
            break;
        }
        cur_score = player2.Roll();
        p2_score += cur_score;
        cout << "2. oyuncu zar atti " << cur_score << " puan kazandi " << p2_score <<  " toplam puani" << endl;
        if(p2_score >= finishing_threshold)
        {
            cout << " 2. oyuncu " << finishing_threshold << " puana ulasti ve oyuni kazandi " << endl;
        }
        
    }
    
    return 0;
}
