#include <iostream>
using namespace std;

class Vehicle {
protected:
    int speed;
    int fuel_capacity;
public:
    Vehicle(int speed, int fuel_capacity) : speed(speed), fuel_capacity(fuel_capacity) {}

    virtual void display_info() {
        cout << "Vehicle Information:" << endl;
        cout << "Speed: " << speed << " mph" << endl;
        cout << "Fuel Capacity: " << fuel_capacity << " gallons" << endl;
    }
};

class Car : public Vehicle {
protected:
    int num_seats;
public:
    Car(int speed, int fuel_capacity, int num_seats) : Vehicle(speed, fuel_capacity), num_seats(num_seats) {}

    void display_info() override {
        Vehicle::display_info();
        cout << "Number of Seats: " << num_seats << endl;
    }
};

class Sedan : public Car {
private:
    int trunk_capacity;
public:
    Sedan(int speed, int fuel_capacity, int num_seats, int trunk_capacity) : Car(speed, fuel_capacity, num_seats), trunk_capacity(trunk_capacity) {}

    void display_info() override {
        Car::display_info();
        cout << "Trunk Capacity: " << trunk_capacity << " cubic feet" << endl;
    }
};

int main() {
    int speed, fuel_capacity, num_seats, trunk_capacity;
    
    cout << "Enter speed (mph): ";
    cin >> speed;
    
    cout << "Enter fuel capacity (gallons): ";
    cin >> fuel_capacity;
    
    cout << "Enter number of seats: ";
    cin >> num_seats;
    
    cout << "Enter trunk capacity (cubic feet): ";
    cin >> trunk_capacity;
    
    Sedan sedan(speed, fuel_capacity, num_seats, trunk_capacity);
    sedan.display_info();

    return 0;
}
