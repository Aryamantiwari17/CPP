#include<iostream>
using namespace std;
class distance1{
public:
    void distance(float);
 

private:
    int dis;

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
}
void distance2::disinm(){
    float x;
    cout<<"enter the distance"<<endl;
    cin>>x;
    cout<<"Distance in m"<<x<<endl;


}
int main(){
    distance1 (float dist);
   distance1.distance();
    distance2 (float n,float x);
      distance2.disinkm();
      distance2.disinm();
    return 0;

}