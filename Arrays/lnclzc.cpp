#include<iostream>
using namespace std;

void update(int arr[],int size){
    cout<<"update function";
    arr[2]=123;
       for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<endl;
    }
cout<<"main function<<endl";


}
int main(){
    int arr[3]={4,5,6};
       update(arr,3);
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<endl;
    }
    

}