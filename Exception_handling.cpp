#include<iostream>
using namespace std;

float divide(float a,float b){
    if (b == 0){
        throw"Division by zero error";
    }
    return a/b;
}

int main(){
    float num,den;
    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> den;
    try{
        float result = divide(num,den);
        cout << "Result: " << result << endl;
    }
    catch(const char* msg){
        cout << "Error: " << msg << endl;
    }
}