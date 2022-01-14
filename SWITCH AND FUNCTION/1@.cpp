#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int m;
    cout<<"enter the value of m"<<endl;
    cin>>m;
    char op;
    cout<<"enter the op"<<endl;
    cin>>op;
    switch(op){
        case '+':cout<<(n+m)<<endl;
           break;
           case '-':cout<<(n-m)<<endl;
           break;
           case '*':cout<<(n*m)<<endl;
           break;
           case '/':cout<<(n/m)<<endl;
           break;
           case '%':cout<<(n%m)<<endl;
           break;
    }
    

}


    

    
    

