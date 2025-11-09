#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Template function to find maximum of two values
template <class T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

// Template class using built-in STL stack
template <class T>
class MyStack {
    stack<T> st;   // Using STL stack
public:
    void pushValue(T val) {
        st.push(val);         // built-in push()
    }

    void popValue() {
        if (!st.empty()) {
            st.pop();         // built-in pop()
        } else {
            cout << "Stack is empty\n";
        }
    }

    bool isEmpty() {
        return st.empty();     // built-in empty()
    }

    void topValue() {
        if (!st.empty()) {
            cout << "Top Element: " << st.top() << endl; // built-in top()
        } else {
            cout << "Stack is empty\n";
        }
    }
};

int main() {
    // Demonstrate template function
    cout << "Max of 10 and 20 = " << getMax(10, 20) << endl;
    cout << "Max of 3.14 and 2.7 = " << getMax(3.14, 2.7) << endl;
    cout << "Max of \"Apple\" and \"Banana\" = " << getMax(string("Apple"), string("Banana")) << endl;

    // Demonstrate template class with int
    MyStack<int> s1;
    s1.pushValue(100);
    s1.pushValue(200);
    s1.topValue();
    s1.popValue();
    s1.topValue();

    // Demonstrate template class with string
    MyStack<string> s2;
    s2.pushValue("Hello");
    s2.pushValue("World");
    s2.topValue();

    return 0;
}
