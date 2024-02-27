
#include <iostream>
using namespace std;
class sum {
   public:
   int a,b,su;
    void add() {
        cout << "enter a number: ";
        cin>>a;
         cout << "enter a number: ";
        cin>>b;
    }

    int sadd() {
        su=a+b;
    }
};
class jo : public sum {
   public:
    void ba() {
        cout << "Sum Of 2 Number:"<<sadd() << endl;
    }
};

int main() {
    jo d;
    d.add();
    d.sadd();
    d.ba();

    return 0;
}