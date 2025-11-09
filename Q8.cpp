#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << left << setw(10) << roll 
             << setw(15) << name 
             << setw(10) << marks << endl;
    }
};

void createRecord() {
    ofstream fout("student.txt", ios::app);
    Student s;
    s.input();
    fout << s.roll << " " << s.name << " " << s.marks << endl;
    fout.close();
    cout << "Record Added Successfully!\n";
}

void displayRecords() {
    ifstream fin("student.txt");
    Student s;

    cout << left << setw(10) << "Roll" 
         << setw(15) << "Name" 
         << setw(10) << "Marks" << endl;
    cout << "----------------------------------------\n";

    while (fin >> s.roll >> s.name >> s.marks) {
        s.display();
    }
    fin.close();
}

void searchRecord() {
    ifstream fin("student.txt");
    Student s;
    int r;
    string n;
    bool found = false;

    cout << "Enter Roll to Search: ";
    cin >> r;
    cout << "Enter Name: ";
    cin >> n;

    while (fin >> s.roll >> s.name >> s.marks) {
        if (s.roll == r && s.name == n) {
            cout << "Record Found:\n";
            s.display();
            found = true;
            break;
        }
    }
    fin.close();

    if (!found) cout << "Record Not Found!\n";
}

void modifyRecord() {
    ifstream fin("student.txt");
    ofstream temp("temp.txt");
    Student s;
    int r;
    string n;
    bool modified = false;

    cout << "Enter Roll to Modify: ";
    cin >> r;
    cout << "Enter Name: ";
    cin >> n;

    while (fin >> s.roll >> s.name >> s.marks) {
        if (s.roll == r && s.name == n) {
            cout << "Enter New Details:\n";
            s.input();
            modified = true;
        }
        temp << s.roll << " " << s.name << " " << s.marks << endl;
    }

    fin.close();
    temp.close();

    remove("student.txt");
    rename("temp.txt", "student.txt");

    if (modified) cout << "Record Updated Successfully!\n";
    else cout << "Record Not Found!\n";
}

void deleteRecord() {
    ifstream fin("student.txt");
    ofstream temp("temp.txt");
    Student s;
    int r;
    string n;
    bool deleted = false;

    cout << "Enter Roll to Delete: ";
    cin >> r;
    cout << "Enter Name: ";
    cin >> n;

    while (fin >> s.roll >> s.name >> s.marks) {
        if (s.roll == r && s.name == n) {
            deleted = true;
            continue; // skip writing this record → delete
        }
        temp << s.roll << " " << s.name << " " << s.marks << endl;
    }

    fin.close();
    temp.close();

    remove("student.txt");
    rename("temp.txt", "student.txt");

    if (deleted) cout << "Record Deleted Successfully!\n";
    else cout << "Record Not Found!\n";
}

int main() {
    int choice;
    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Modify Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createRecord(); break;
            case 2: displayRecords(); break;
            case 3: searchRecord(); break;
            case 4: modifyRecord(); break;
            case 5: deleteRecord(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
