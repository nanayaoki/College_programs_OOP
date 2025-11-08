#include<iostream>
using namespace std;

class age{
    public:
    int y;
    age(int y){
        this->y=y;
    }

    void display(){
    cout << "Age is: " << y << " years" << endl;
    }
};

int main(){

    int years;
    cout << "Enter age in years: ";
    cin >> years;

    age a1 = years;  
    a1.display();

    return 0;
}
