#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
public:
    const char* what() const noexcept {
        return "Custom Exception: Invalid number entered!";
    }
};

int main() {
    int num;
    cout << "Enter a positive number: ";
    cin >> num;

    try {
        if (num < 0) {
            throw MyException();
        }
        cout << "Valid number: " << num << endl;
    }
    catch (MyException &e) {
        cout << e.what() << endl;
    }

    return 0;
}
