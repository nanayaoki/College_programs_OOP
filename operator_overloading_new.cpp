#include<iostream>
using namespace std;

class complex{
    public:
    int real;
    int imag;


    friend istream& operator >> ( istream &in , complex &c);

    friend ostream& operator << ( ostream &out , complex &c);

    complex operator + (const complex &c){
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }


    int display(){
        cout << endl;
        cout <<"The addition of complex numbers is "<<  real << "+" << imag << "i" << endl;
        return 0;
    }

};

istream& operator >> ( istream &in , complex &c){
    cout << "Enter the real part = ";
    in >> c.real;
    cout << "Enter the imaginary part = ";
    in >> c.imag;
    cout << endl;
    return in;
}

ostream& operator << ( ostream &out , complex &c){
    out <<"The complex number is "<<  c.real << "+" << c.imag << "i" << endl;
    return out;
}

int main(){

    complex c1,c2;
    cout << "Enter first complex number below" << endl;
    cin >> c1;
    cout << "Enter second complex number below" << endl;
    cin >> c2;

    cout << c1;
    cout << c2;

    complex c3;
    c3 = c1+c2;

    c3.display();

    return 0;}