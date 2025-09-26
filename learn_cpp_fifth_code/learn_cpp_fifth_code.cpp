#include<iostream>
using namespace std;
int main()
{
    // variables part
    int age;
    double energy;
    int level;
    // asking user for infos
    cout<<"Please Enter your infos at this order :\n Age > Energy > Level"<<endl;
    cin>>age;
    cin>>energy;
    cin>>level;
    // working part
    if (age<18)
    {
        cout<<"Minors are not allowed into Africana"<<endl;
        return 0;
        
    }
    else if (age>=18 && energy>50 && level>5)
    {
        cout<<"What a tuff daddy , you are ready for Africana"<<endl;
        
    }
    else if (age>=18 && energy<=50 && level<=5)
    {
        cout<<"What a weak ahh adult , go train"<<endl;
    }
    else 
    {
        cout<<"What are u even doing here bruh"<<endl;
    }
    
    
    return 0;
}
