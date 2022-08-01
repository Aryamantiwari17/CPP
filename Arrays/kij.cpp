#include<iostream>
using namespace std;
void fnc(int i,int sum){
    
    if(i<1){
        cout<<sum;
        return;
    }
    fnc(i-1,sum+i);
    return ;
}


int main(){
    int n,i;
    int sum;
    cin>>n;
    fnc(n,0);
    return 0;
    
}