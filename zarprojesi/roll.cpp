#include <iostream>
#include "dice.h"
using namespace std;

// simple program illustrating use of Dice class
// roll two dice, print results, Owen Astrachan, 3/31/99

int main(){
	// Dice test;
    Dice cube(6);              // six-sided die
    Dice dodeca(12);           // twelve-sided die

    cout << "rolling " << cube.NumSides() << " sided die" << endl;
    cout << cube.Roll() << endl;
    cout << cube.Roll() << endl;
    cout << "rolled " << cube.NumRolls() << " times" << endl <<endl;

    cout << "rolling " << dodeca.NumSides() << " sided die" << endl;
    cout << dodeca.Roll() << endl;
    cout << dodeca.Roll() << endl;
    cout << dodeca.Roll() << endl;
    cout << "rolled " << dodeca.NumRolls() << " times" << endl;
    
    return 0;
}

