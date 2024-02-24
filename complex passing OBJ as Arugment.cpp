#include<iostream>
using namespace std;
class Complex
{
private:
	float r;
	float d;
public:
	Complex(){
		r = 0;
		d = 0;
	}
	Complex(float r, float i){
		r = r;
		d = i;
	}
	Complex add(Complex c){
		return Complex(r + c.r, d + c.d);
	} 
	void display(){
		cout<<"("<<r<<","<<d<<")"<<endl;
	}
};

int main(){
	Complex c1(2.3, 4.4), c2(3.3, 4.5), c3;
	c3 = c1.add(c2);
	c1.display();
	c2.display();
	cout<<"And the sum is :"<<endl;
	c3.display();
	return 0;
}