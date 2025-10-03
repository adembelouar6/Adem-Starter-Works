#include <iostream>
 using namespace std;
int main()
{
    string pass; // first pass
    string loginpass; // second pass
    
    cout<<"Welcome to the system enter your password :"<<endl;
    cin>>pass;
    cout<<"just to confirm re enter the password please : "<<endl;
    cin>>loginpass;
    while(loginpass!=pass)
    {
        cout<<"wrong pass try again"<<endl;
        cin>>loginpass;
        if (loginpass==pass)
        {
            cout<<"finally dawg"<<endl;
            break;
        }
        
    }
    
    return 0;
}
