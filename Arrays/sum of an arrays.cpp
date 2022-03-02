#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,5,2,6};
    int count=0;
    for(int i=0;i<5;i++){
        count=count+arr[i];
    }
    cout<<"add of arrays"<<count<<endl;

}