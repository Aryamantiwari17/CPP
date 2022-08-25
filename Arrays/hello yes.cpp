#include<iostream>
using namespace std;
class distance1{
public:
    void distance(float);
 

private:
    float dis;

};
void distance1::distance(){
    float dist;
    cout<<"enter the distance1"<<endl;
    cin>>dist;
    cout<<"distance1 in miles="<<dist<<endl;


}
class distance2{
    public: 
    void disinkm(float);
    void disinm(float);
    private:
    int n,x;


};
void distance2::disinkm(){
    float n;
    cout<<"enter the distance"<<endl;
    cin>>n;
    cout<<"distance in km"<<n<<endl;
    float temp=(n/100);
    cout<<"distance in m"<<temp<<endl;;


}


int main(){

    return 0;

}