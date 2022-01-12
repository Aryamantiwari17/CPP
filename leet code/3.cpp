
The complement of a binary representation is the number in binary you get when changing every 1 to a 0 and 0 to a 1.  For example, the complement of "101" in binary is "010" in binary.

For a given number N in base-10, return the complement of it’s binary representation as a base-10 integer.

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int m=n;
    int mask=0;
    if(n==0)
    cout<<'1';
    else{
    while(m!=0){
        mask=(mask<<1)| 1;
        m=m>>1;
    }
    int ans =(~n) & mask;
    cout<<ans;
    }
    
    
    }
    

    
