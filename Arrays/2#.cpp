#include<iostream>
using namespace std;
void printARRAY(int arr[],int size){
   
   int n=6;
   for(int i=0;i<n;i++){
      cout<<arr[i];
   }
   cout<<endl<<"print done"<<endl;


}
   int main(){
      int num[15]={1,2,3};
      printARRAY(num,15);
       
      cout<<"hi"<<endl<<num [14]<<endl;
      int fiv[32]={4,6,8};
      printARRAY(fiv,32);
      cout<<fiv[32]<<endl;
       
       int fivsize=sizeof(fiv)/sizeof(int);
       cout<<"siz="<<fivsize<<endl;













       
    
   }