#include<iostream>
using namespace std;
class distance2()
class distance1{
     private:
     float x;
   public:
    distance1(){
        x=0;
    }
    distance1(float n){
        x=n;
    }
    void vdisp(){
        cout<<"distance will be :"<<x<<endl;
    }
    ~distance1()
    {
        cout<<"destroy"<<endl;
    }
  
    friend float adddis(distance1&,distance2&)
};
class distance2{
    private:
    float kilomete;
    float mete;
    public:
    distance2(float km,m){
        kilomete=km;
        mete=m;
    }
    void vdisplay(){
        cout<<"distance in km"<<kilomete<<endl<<"distance in m"<<mete<<endl;

    }
    ~distance2(){
        cout<<"2nd destroy"<<endl;
    }
    friend float adddis(distance1&,distance2&)
};
float adddis(distance1&obj1,distance2&obj2){
    float kmtomile;
    float sum_1,sum_2,sum_3;
    float miletokm;

    kmtomile=(obj2.kilomete+(((obj2.mete)/1000))*0.621);
    milestokm=(obj1.x*1.6);
     
     sum_1=(obj1.x+kmtomile);
     sum_2=(obj2.km+(obj2.mete/1000)+milestokm);
     sum_3=ceil(obj2.kilomete+milestokm);
     obj1.x=sum_1;
     obj2.km=sum_3;
     obj2.mete=fmod(sum_2*1000);
}
int main(){
    distance1 obj1(6.7);
    distance2 obj2(34,450);
    obj1.vdisp();
    obj2.vdisplay();
    adddis(obj1,obj2);
}









  
 

