#include<iostream>
using namespace std;

template <typename T>
class display{
    public:
    T value;
    display(T v){
        value = v;
        cout << "value is "  << value;
    }
};

int main(){
    display<int> d1(10);
    cout << endl;
    display<float> d2(1.0);
    cout << endl;
    display<char> d3('A');
    cout << endl;
    display<string> d4("Hello");
    cout << endl;
    return 0;
}