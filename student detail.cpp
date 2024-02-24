#include<iostream>
using namespace std;
class student
{
        private:
                
                        char name[20],uid[10],branch[10];
                        int sem;
        public:
                void input();
                void display();
                        
                
};
void student::input()
{
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Uid No.:";
        cin>>uid;
        cout<<"Enter Branch:";
        cin>>branch;
        cout<<"Enter Sem:";
        cin>>sem;
}
void student::display()
{
        cout<<"\nName:"<<name;
        cout<<"\nUid No.:"<<uid;
        cout<<"\nBranch:"<<branch;
        cout<<"\nSem:"<<sem;
}
int main()
{
        student s;
        s.input();
        s.display();
}