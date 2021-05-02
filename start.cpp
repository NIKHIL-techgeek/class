#include <iostream>
using namespace std;
// Exhchanging two data members of class
class y;
class x
{
    int id ;
    friend void exchange(x &, y &);
    public:
        void set_id(int m)
        {
            id=m;
        }
        void print_id(void)
        {
            cout<<"the id1 set by the user is "<<id<<endl;
        }
};
class y
{
     int id2 ;
    friend void exchange(x &, y &);
    public:
        void set_id2(int n)
        {
            id2=n;
        }
        void print_id2(void)
        {
            cout<<"the id2 set by the user is "<<id2<<endl;
        }
};
void exchange( x &ob1, y &ob2)
{
    int temp= ob1.id;
    ob1.id=ob2.id2;
    ob2.id2=temp;
}
int main()
{
    int a;
    cout<<"enter the value of id1: ";
    cin>>a;
    int b;
    cout<<"enter the value of id2: ";
    cin>>b;
    x P;
    y O;
    P.set_id(a);
    O.set_id2(b);
    exchange(P,O);
    P.print_id();
    O.print_id2();
    return 0;
}