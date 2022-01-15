#include <iostream>
using namespace std;
boolisEVEN (int a) {
    if(a&1){
        return 0;
        //odd
 }
 else{
    return 1;
    //even
 }

}
int main(){
    int a;
    cin>>a;
    if(boolisEVEN(a)){

        cout<<"Number is even"<<endl;

    }
    else{
        cout<<"Number is odd"<<endl;

    }
}