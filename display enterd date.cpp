#include<iostream>
using namespace std;
class date
{
        private:
        int d,m,y;
        public:
                void input();
                void display();
};
void date::input()
{
        cout<<"Enter Year:";
        cin>>y;
        cout<<"Enter Month:";
        cin>>m;
        cout<<"Enter Day:";
        cin>>d;
}
void date::display()
{
        cout<<"Today's Date in dd/mm/yyyy format:"<<d<<"/"<<m<<"/"<<y;
}
int main ()
{
 date d;
 d.input();
 d.display();
}