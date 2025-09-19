#include<iostream>
using namespace std;
int main()
{
// variables part
string name; // the player name
int age; // the player age
double energy; // the player energy
int years; // years spent by player
double consumed; // energy consumed by player
// info part
cout << "Hello Player Welcome to Africana!" << endl;
cout << "Enter your name" << endl;
cin >> name;
cout << "Enter your age" << endl;
cin >> age;
cout << "Enter your Energy" << endl;
cin >> energy;
cout << "How many years you spent in africana" << endl;
cin >> years;
cout << "How much energy u consumed in this years" << endl;
cin >> consumed;
cout << "Your stats ingame are :" << endl;
cout << "Name :\t" <<name<< endl;
cout << "Age :\t" <<age<<"\t»\t"<<age+years<< endl;
cout << "Energy :\t" <<energy<<"\t»\t"<<energy-consumed<< endl;

return 0;
}
