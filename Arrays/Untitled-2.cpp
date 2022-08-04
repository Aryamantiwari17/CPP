#include<iostream>
using namespace std;
int main(){
    int a[5];
    for(int i;i<5;i++){
        cout<<"enter the number"<<endl;
        cin>>a[i];
        int max=a[i];
        for(i=1;i<5;i++){
            if(a[i]>max){
                a[i]=max;

            }
            cout<<"maximumm of an array"<<max<<endl;
        }
    }
}