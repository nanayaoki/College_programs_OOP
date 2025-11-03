#include<iostream>
#include<string>
using namespace std;

class time {
    public:
    int hours;
    int minutes;

    time(int h ,int m){
        hours = h;
        minutes = m;
    }

    operator int(){
        return hours * 60 + minutes;
    }

};

int main(){
    time t(2,30);
    int x = t;
    cout << "Total minutes: " << x << endl;

    return 0;
}