#include<iostream>
using namespace std;

class complex
{
private:
    int Real1;
    int Imag1;
    int Real2;
    int Imag2;

public:
    int getdata(){
        cout << "Enter First Real Number : ";
        cin >> Real1 ;
        cout << "Enter Second Real Number : ";
        cin >> Real2 ;
        cout << "Enter First Imaginary Number : ";
        cin >> Imag1 ;
        cout << "Enter Second Imaginary Number : ";
        cin >> Imag2 ;
        return 0;
    }
    int Add()
    {
        int Real3 = Real1+Real2;
        int Imag3 = Imag1+Imag2;
        cout << "Real : " << Real3 << endl << "Imaginary : " << Imag3 << endl;
        cout << "Real + Imaginary : " << Real3 << " + " << "i" << Imag3 << endl ;
    }
    int Mul(){
        int Real4 = Real1*Real2;
        int Imag4 = Imag1*Imag2;
        cout << "Real : " << Real4 << endl << "Imaginary : " << Imag4 << endl;
        cout << "Real x Imaginary : " << Real4 << " + " << "i" << Imag4 << endl ;
    }
};
int main()
{
    char selection{};
    complex obj;
    int n;
    do{
        cout << "1.Enter the Complex Numbers : " << endl;
        cout << "2.Add the Complex Numbers : "  << endl;
        cout << "3.Multiply the Complex Numbers : " << endl;
        cout << "Q.quit" << endl;
        cout << "Enter your choice";
        cin >> n;
        switch(n)
        {
            case 1: obj.getdata();
                    break;
            case 2: obj.Add();
                    break;
            case 3: obj.Mul();
                    break;
            case 4: selection = 'Q' || 'q' ;
                    break;
        }
    }while(selection != 'Q' && selection != 'q');
    return 0;
}