#include <iostream>

using namespace std;
void print1(int c);
void print2(int *d);

int main()
{

    int p;
    int *pa;
    cout<<" "<<&p<<endl;
    pa =&p;
    cout<<pa<<endl;


    int a=10;
    int b=10;
    cout<<"a = "<<a<<endl;
    cout<<"b= "<<b<<endl;
    print1(a);
    print2(&b);
    cout<<"a = "<<a<<endl;
    cout<<"b= "<<b<<endl;
    return 0;
}
void print1(int c)
{
    c=20;
}
void print2(int *d)
{
    *d=80;
}
