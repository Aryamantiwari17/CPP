#include<iostream>
using namespace std;
int main(){
    
    int n;
int ans=0;
    cin>>n;
    while(n!=0){
        int digit=n%10;
        ans=(ans*10)+digit;
        n=n/10;
    }
    cout<<ans;
    return ans;



    }
    
