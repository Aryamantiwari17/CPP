#include<iostream>
using namespace std;
int main (){
    char n;
    
    int num;
    cin>>n>>num;
    
    switch(n){
        case 1:cout<<"First"<<endl;
        break;

        case '1': switch(num){
            case 1:cout<<"arrrrr"<<endl;
            break;
        }
        break;
        default:cout<<"It is default case"<<endl;
    }
}