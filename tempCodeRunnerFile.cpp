#include<iostream>
using namespace std;
int main(){
    int a[10]={1,2,3};
    int max;
    for(int i;i<10;i++){
        cout<<a[i]<<endl;

    }
    max=a[0];
    for(int i=0;i<10;i++){
        if (a[i]==max);
        max=a[i];
    }
         
    
    cout<<"max number is"<<max<<endl;
    
    return 0;
}
