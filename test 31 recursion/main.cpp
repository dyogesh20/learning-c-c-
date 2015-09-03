#include <iostream>

using namespace std;
int factorial (int a)
{
    if (a==1)
    {
        return 1;
    }
    else
    {
        return a*factorial(a-1);
    }
}

int main()
{
    int a;
    cout<<"Enter a positive real value except zero"<<endl;
    cin>>a;
    cout<<factorial(a);
}
