#include <iostream>

using namespace std;

int main()
{
    int a[10];
    for(int i=0;i<10;i++){
        cout<<"print the number"<<endl;
        cin>>a[i];
        
    }

int max=a[0];
for(int i=1;i<10;i++){
    if(a[i]>max)
        max=a[i];
}
        cout<<"max num"<<max;
    
    
}