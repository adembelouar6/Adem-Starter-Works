#include <iostream>
 using namespace std;
int main()
{
 int num1;
 int truenum=7;

    do
    {
         cout<<"guess a number from 1 to 10 :";
         cin>>num1;
         if(num1>=1 && num1<=10)
     {
         if(num1==truenum)
         {
             cout<<"amazing amigo you are goated"<<endl;
             break;
         }
         else if(num1!=truenum)
         {
             cout<<"wrong number ! try again"<<endl;
         }

     }
                 else 
         {
             cout<<"i said from 1 to 10 dummy"<<endl;
         }
        
        
    }while(num1>=1 && num1<=10);
    return 0;
}
