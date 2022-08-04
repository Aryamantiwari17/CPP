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
      int num[15]={1,2,3,7,9,98,83,83,9383,8,93,83,73,383,98};
      printARRAY(num,15);
       
      cout<<endl<<num [14]<<endl;
      int fiv[32]={4,6,8};
      printARRAY(fiv,32);
      cout<<fiv[32]<<endl;
       
       int fivsize=sizeof(fiv)/sizeof(int);
       cout<<"siz="<<fivsize<<endl;

       char ch[5]={'a','p','o','i'};
       cout<<ch[3]<<endl;
   }













       
    
   
