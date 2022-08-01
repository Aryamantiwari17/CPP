#include<iostream>
using namespace std;
void fnc(int n){
    if(n==0){
        
        return 0;
    }
    
    
    
    return  n+fnc(n-1);
    } 
    
    

    

int main(){ 

    int n=3;
    cin>>n;
    cout<<fnc(n);
    return 0;
}
