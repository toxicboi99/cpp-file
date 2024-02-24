 #include<iostream>
 using namespace std;
 class Time
 {
  public:
  int h,m,s;
 void input()
   {
    cout<<"Enter hour:";
    cin>>hr;
    cout<<"\nEnter minute:";
    cin>>m;
    cout<<"\nEnter second:";
    cin>>s;
    }
   void display()
   {
    cout<<"\nTime :"<<h<<":"<<m<<":"<<s;
    }
 };
 int main()
 {
  Time ritesh;
  ritesh.input();
  ritesh.display();
  return 0;
  }