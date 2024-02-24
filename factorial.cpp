#include <iostream>
using namespace std;
class Fact {
private:
    mutable int p;

public:
    Fact() : p(0) {}

    void Calculate(int n) const {
        p = 1;
        for (int i = 1; i <= n; ++i) {
            p *= i;
        }
    }

    void Result() const {
        cout << "Factorial value is " << p << endl;
    }
};

int main() {
    int n;
    cout << "Enter the value: ";
    cin >> n;

    const Fact ritesh;
    ritesh.Calculate(n);
    ritesh.Result();

    return 0;
}