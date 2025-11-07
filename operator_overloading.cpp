#include<iostream>
using namespace std;

class complex{
    public:
    int real;
    int imag;

    complex operator + (const complex &c){
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }


    int display(){
        cout <<"The addition of complex numbers is "<<  real << "+" << imag << "i" << endl;
        return 0;
    }

    int input(){
        cout << "Enter the real part = ";
        cin >> real;
        cout << "Enter the imaginary part = ";
        cin >> imag;
        cout << endl;
        return 0;
    }
};

int main(){

    complex c1,c2;
    cout << "Enter first complex number below" << endl;
    c1.input();
    cout << "Enter second complex number below" << endl;
    c2.input();

    complex c3;
    c3 = c1+c2;

    c3.display();

    return 0;}