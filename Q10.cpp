#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;  // creating vector

    // Adding 5 elements
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // Display vector contents
    cout << "Vector elements: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Access 3rd element using index
    cout << "3rd element using index  : " << numbers[2] << endl;

    // Access 3rd element using at()
    cout << "3rd element using at()   : " << numbers.at(2) << endl;

    // Remove last element
    numbers.pop_back();

    // Display updated vector
    cout << "Vector after removing last element: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
