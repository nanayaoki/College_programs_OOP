#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctEmail = "user@gmail.com";
    string correctPassword = "abc123";

    string email, password;
    int attempts = 0;

    try {
        while (attempts < 3) {
            cout << "Enter Email: ";
            cin >> email;
            cout << "Enter Password: ";
            cin >> password;

            if (email == correctEmail && password == correctPassword) {
                cout << "\nLogin Successful! Welcome to Gmail.\n";
                return 0;
            } 
            else {
                attempts++;
                cout << "Invalid Email or Password! Attempts left: " 
                     << (3 - attempts) << "\n\n";
            }
        }

        // Throw exception if attempts exceed
        throw "Too many failed attempts! Account temporarily locked.";

    }
    catch (const char* msg) {
        cout << "\nException: " << msg << endl;
    }

    return 0;
}
