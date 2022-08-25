#include<iostream>
using namespace std;
class ratio{
public:
    void assignment(int,int);
    double convert();
    void invert();
    void print();
private:
    int num,den;
};
int  main()
{
    ratio x;
    x.assign(12,2);
    cout<<x;
    x.print();
    cout<<"="<<x.convert()<<endl;
    x.invert();
    cout<<"1/x"<<x.print;
}