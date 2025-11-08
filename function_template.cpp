#include<iostream>
using namespace std;

template<typename T>
T add(T a,T b){
    return a+b;
}

int main(){
    cout << add(1,2) << endl;
    cout << add(1.5,2.3) << endl;  
    cout << add(string("Hello, "), string("World!")) << endl;
    cout << add('A', 'B') << endl;
    return 0;
}
