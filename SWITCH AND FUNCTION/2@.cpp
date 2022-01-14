#include <iostream>
using namespace std;

int main()
{
  int amt;
  cout<<"Enter the amount"<<endl;
  cin>>amt;
  int Rs100 , Rs50 , Rs20 , Rs1;

  switch(1)
  {
      case 1: Rs100=amt/100;
              amt=amt%100;
              cout<<"No of 100 Rupee notes  are="<<Rs100<<endl;
              
         
      case 2: Rs50=amt/50;
              amt=amt%50;
              cout<<"No of 50 Rupee notes  are="<<Rs50<<endl;
              

      case 3: Rs20=amt/20;
              amt=amt%20;
              cout<<"No of 20 Rupee notes are="<<Rs20<<endl;
               

      case 4: Rs1=amt/1;
              amt=amt%1;
              cout<<"No of 1 Rupee notes are="<<Rs1<<endl; 
                  
           }
}