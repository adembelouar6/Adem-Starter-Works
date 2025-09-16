#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    char symbol;
    double energy;
    bool Alive;
    cout << "Enter your name :\n ";
    cin >> name;
    cout << "Enter your age : \n ";
    cin >> age;
    cout << "Enter your symbol : \n ";
    cin >> symbol;
    cout << "Enter your energy : \n ";
    cin >> energy;
    cout << "Enter your status : \n ";
    cin >> Alive;
    cout << "ur data are : \n";
    cout << "Name :\t" << name << "\nAge :\t" << age << "\nSymbol :\t" << symbol << "\nEnergy :\t" << energy << "\nStatus :\t" << Alive << endl;

    return 0;
}