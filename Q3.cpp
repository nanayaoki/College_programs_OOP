#include <iostream>
using namespace std;

class Car {
protected:
    string brand;
    string model;
public:
    void setCar(string b, string m) {
        brand = b;
        model = m;
    }
    void showCar() {
        cout << "Car: " << brand << " " << model << endl;
    }
};


// Car -> RentalCar
class RentalCar : public Car {
protected:
    float rentPerDay;
public:
    void setRent(float r) {
        rentPerDay = r;
    }
    void showRent() {
        showCar();
        cout << "Rent/day: ₹" << rentPerDay << endl;
    }
};


// Car -> RentalCar -> LuxuryCar
class LuxuryCar : public RentalCar {
    bool chauffeur;
public:
    void setLuxury(bool c) {
        chauffeur = c;
    }
    void showLuxury() {
        showRent();
        cout << "Chauffeur Included: " << (chauffeur ? "Yes" : "No") << endl;
    }
};


// Customer & RentalCar -> Booking
class Customer {
protected:
    string name;
public:
    void setCustomer(string n) {
        name = n;
    }
};

class Booking : public RentalCar, public Customer {
    int days;
public:
    void setBooking(int d) {
        days = d;
    }
    void showBooking() {
        cout << "\n--- Booking Details ---\n";
        cout << "Customer: " << name << endl;
        showCar();
        cout << "Days Booked: " << days << endl;
        cout << "Total Rent: ₹" << days * rentPerDay << endl;
    }
};



class Sedan : public Car {
public:
    void type() {
        cout << brand << " " << model << " is a Sedan.\n";
    }
};

class SUV : public Car {
public:
    void type() {
        cout << brand << " " << model << " is an SUV.\n";
    }
};

class Hatchback : public Car {
public:
    void type() {
        cout << brand << " " << model << " is a Hatchback.\n";
    }
};


int main() {

    cout << "===== Single Inheritance =====\n";
    RentalCar r;
    r.setCar("Maruti", "Dzire");
    r.setRent(1200);
    r.showRent();

    cout << "\n===== Multilevel Inheritance =====\n";
    LuxuryCar l;
    l.setCar("BMW", "X5");
    l.setRent(6000);
    l.setLuxury(true);
    l.showLuxury();

    cout << "\n===== Multiple Inheritance =====\n";
    Booking b;
    b.setCustomer("Om");
    b.setCar("Honda", "City");
    b.setRent(2000);
    b.setBooking(3);
    b.showBooking();

    cout << "\n===== Hierarchical Inheritance =====\n";
    Sedan s;
    SUV u;
    Hatchback h;

    s.setCar("Honda", "City");
    u.setCar("Mahindra", "Thar");
    h.setCar("Maruti", "Swift");

    s.type();
    u.type();
    h.type();

    return 0;
}
