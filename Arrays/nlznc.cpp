#include <iostream>
using namespace std;
 void sum(int arr[],int size){
    int add=0;
    for(int i=0;i<5;i++){
         add=arr[i]+add;
         
       
    }
     cout<<"sum is"<<add<<endl;
    
 }
int main() {

  int arr[5];

  cout << "Enter 5 numbers: " << endl;

  //  store input from user to array
  for (int i = 0; i < 5; ++i) {
    cin >> arr[i];
  }

  cout << "The numbers are: ";

  //  print array elements
  for (int n = 0; n < 5; ++n) {
    cout << arr[n] << "  ";
  }
 sum(arr,5);
  return 0;
}