#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void Swaparr(int arr[],int size){
    for(int i=0;i<size;i+= 2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }

    }
}
int main(){

int odd[5]={2,3,4,5,6};
int even[8]={5,8,4,3,6,4,3,1};
Swaparr(even,8);
printarray(even,8);
cout<<endl;

Swaparr(odd,5);
printarray(odd,5);
}








