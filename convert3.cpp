#include <iostream>
using namespace std;

class Minute {
public:
    int minutes;
    Minute(int m = 0) {
        minutes = m;
    }
};

class Time {
public:
    int hours;
    int minutes;

    Time(Minute m) {
        hours = m.minutes / 60;
        minutes = m.minutes % 60;
    }

    void show() {
        cout << hours << " hr " << minutes << " min" << endl;
    }
};

int main() {
    Minute m(130);

    Time t = m;   
    t.show();   
}
