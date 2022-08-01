#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	  
    while(t!=0){
        
	    int a,b,c,d,m1,m2,res;
	    cin>>a>>b>>c>2>d;
	    if(a>b){
	        m1=a;
	    }
	    else{
	        m1=b;
	    }
	    if(c>d){
	        m2=c;
	        
	    }
	    else{
	        m2=d;
	    }
	    res=m1+m2;
	    cout<<res<<endl;
	}
    t=t-1;
	return 0;
}
