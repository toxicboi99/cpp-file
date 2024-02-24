#include <iostream>
using namespace std;

class Time {
private:
    int h, m;

public:
    void input(int& h, int& m) {
        cout << "Enter the h: ";
        cin >> h;
        cout << "Enter the m: ";
        cin >> m;
    }

    void add(const Time& t, Time& r) {
        r.m = m + t.m;
        r.h = h + t.h + r.m / 60;
        r.m %= 60;
    }

    void display() {
        cout << h << " hours " << m << " minutes" << endl;
    }
};

int main() {
    Time t1, t2, sum;
    t1.input(t1.h, t1.m);
    t2.input(t2.h, t2.m);
    t1.add(t2, sum);
    cout << "The sum of the two times is: ";
    sum.display();
    return 0;
}