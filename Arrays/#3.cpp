//max of an array
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

//min of an array//



#include <iostream>

using namespace std;

int main()
{
    int a[10];
    for(int i=0;i<10;i++){
        cout<<"print the number"<<endl;
        cin>>a[i];
        
    }

int min=a[0];
for(int i=1;i<10;i++){
    if(a[i]<min)
        min=a[i];
}
        cout<<"max num"<<min;
    
    
}

