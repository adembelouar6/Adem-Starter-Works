
#include <iostream>
using namespace std;
int main() {
  // calculator first try
  //variables
  char op;
double first;
double second;
// output x input
cout<<"Welcome to Africana calculator !"<<endl;
cout<<"Please enter an operation (+,-,*,/)"<<endl;
cin>>op;
cout<<"Please enter a number"<<endl;
cin>>first;
cout<<"Please enter an other number"<<endl;
cin>>second;
switch(op)
{
    case '+' :
    cout<<"the result is :\t"<<first+second<<endl;
    break;
    
    
    case '-' :
    cout<<"the result is :\t"<<first-second<<endl;
    break;
    
    
    case '*' :
    cout<<"the result is :\t"<<first*second<<endl;
    break;
 
    
    case '/' :
      cout<<"the result is :\t"<<first/second<<endl;
    break;
    default :
    cout<<"tf did u even choose bruh"<<endl;
    
}
return 0;
}
