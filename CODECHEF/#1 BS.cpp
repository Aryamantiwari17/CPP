#include<iostream>
using namespace std;
int bs(int arr[],int size,int key){
    int start=0;
     int end=size-1;
     int mid=(start+end)/2;
     while (start<=end)
     {
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid<key]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
     }
     return -1;
}
        
 int main(){


int array[6]={3,7,11,13,19,27};

int empty=bs(array,6,19);

cout <<"the index will be"<<empty<<endl;
 }


 
