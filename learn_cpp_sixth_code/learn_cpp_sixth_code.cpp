//Africana Training camp
#include<iostream>
using namespace std;
#include<string>
int main()
{
    int counter=0;
    int pn;
    cout<<"Please enter the total players number"<<endl;
    cin>>pn;
    for (int i=1; i<=pn; i++)
    {
        string name;
        int age;
        double energy;
        int level;
        cout<<"please enter your name > age > energy > level at this order one by one : "<<endl;
        cin>>name;
        cin>>age;
        cin>>energy;
        cin>>level;
        if (age<18)
        {
            cout<<name<<" is not allowed to enter (minor)"<<endl;
            counter++;
            cout<<" player count : "<<counter<<endl;
            }
        else if (age>=18 && energy>=50 && level>5)
        {
            cout<<name<<" is ready for africana !"<<endl;
            counter++;
            cout<<" player count : "<<counter<<endl;
            }
        else 
        {
            cout<< "you need more training"<<endl;
            counter++;
            cout<<" player count : "<<counter<<endl;
            }
        
        }
    
    

    
    return 0;
    }
