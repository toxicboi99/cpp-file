#include<iostream>
using namespace std;
class swa{
public:
int a,b;
void getdata(){
    cout<<“Enter two numbers:”;
cin>>a>>b;
}
void swapv(){
    a=a+b;
b=a-b;
a=a-b;
}
void display(){
    cout<<"After swap:"<<endl<<"a="<<a<<"b="<<b;
}
};
int main()
{
swa s;
s.getdata();
s.swapv();
s.display();
return 0;
}