#include<iostream>
using namespace std;
void update(int arr[],int n){
    cout<<endl<<"entering the function"<<endl;
    //print array
  for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"going bac to main function"<<endl;




}


int main(){
    int arr[3]={1,2,3};
    update(arr,3);
    //print array
    cout<<endl<<"printing main function "<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
}