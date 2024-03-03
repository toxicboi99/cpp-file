#include <iostream>
using namespace std;
class Addition {
public:
    int add(int a, int b) {
        return a + b;
    }
};
class Subtraction {
public:
    int subtract(int a, int b) {
        return a - b;
    }
};
class Calculator : public Addition, public Subtraction {
public:
    void operate(int a, int b) {
    cout << "Addition: " << a << " + " << b << " = " << add(a, b) << endl;
    cout << "Subtraction: " << a << " - " << b << " = " << subtract(a, b) <<endl;
    }
};
int main() {
    Calculator calc;
    int num1, num2;
    cout << "Enter 1st numbers: ";
    cin >> num1;
     cout << "Enter 2nd numbers: ";
    cin >> num2;
    calc.operate(num1, num2);
    return 0;
}
