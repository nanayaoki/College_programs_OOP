#include<iostream>
#include<string>
using namespace std;

class time {
    public:
    int hour;
    int minute;

    time(int totalmin){
        hour = totalmin /60 ;
        minute = totalmin % 60 ;
    }
    void show(){
        cout << hour << " hour and " << minute << " minute" << endl;
    }
};

int main(){
    time t1 = 130;
    t1.show();

    return 0;
}