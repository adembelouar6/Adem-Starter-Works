#include<iostream>
using namespace std;
int main()
{
// variables part
string playername;
int level;
double health;
double mana;
int score;
// game begins 
cout << "Welcome to Africana v2 where you get claped" << endl;
cout << "Pls enter your info : " << endl;
cout << "Name > Level > Hp > Mana > Score" << endl;
cin>>playername;
cin>>level;
cin>>health;
cin>>mana;
cin>>score;
cout << "u got pretty greedy with these infos huh ?" << endl;
cout << "ur not level\t" <<level<<"\t gng " <<endl;
cout << "Anyways! ur weak ahh started an adventure and entered a dungeon" << endl;
cout << "and for sure u got claped so bad but at least u gained smth" << endl;
cout << "these are your new stats :" << endl;
// calculation part
++level; // gained one level
score+=100; // gained 100 score
health-=10; // lost some hp in battle
mana*=2; // mana got doubled cuz i wanted to
int bonus = score%5; // a lil bonus 
//showing stats
cout << "Name :\t" <<playername<<  endl;
cout << "Level :\t" <<level<< endl;
cout << "Health :\t" <<health<< endl;
cout << "Score :\t" <<score<< endl;
cout << "Mana :\t" <<mana<< endl;
cout << "A Bonus u don't deserve :\t" <<bonus<< endl;
return 0;

}