#include <iostream>
using namespace std;
class G {
private:
    int a, b, c;

public:
    G(int x, int y, int z) : a(x), b(y), c(z) {}

    int ca() {
        if (a > b && a > c) {
            return a;
        } else if (b > a && b > c) {
            return b;
        } else {
            return c;
        }
    }

    void gre() {
        cout << "The greatest number is " << ca() << endl;
    }
};

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    G ritesh(x, y, z);
    ritesh.gre();

    return 0;
}