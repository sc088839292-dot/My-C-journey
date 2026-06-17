#include <iostream>
using namespace std;
int main()
{
    int secretNumber =7;
    int userguess;
    bool hasWon = false;
   cout <<"=== WELCOME TO THE  NUMBER GUESSING GAME ===" << endl;
   cout << " Maine 1 se 10 ke beech ek number socha hai. guess karo!" << endl;
   while (hasWon == false){
    cout <<" \nApna guess enter kijiye :";
    cin >> userguess;
    if (userguess == secretNumber){
        cout <<"Waah! Bilkul sahi jawab!" << endl;
        hasWon = true;
    }
    else {
        cout << "Galat jawab ! Dobara koshish karo." << endl;
    }
   }   cout << "\nGame over! Thanks for playing sir." << endl;
   return 0;
}