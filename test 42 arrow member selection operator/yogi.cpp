#include "yogi.h"
#include <iostream>

using namespace std;

yogi::yogi()
{
    cout<<"it is automatic calling "<<endl<<endl;//ctor
}
yogi::~yogi()
{
    cout<<"I am deconstructor"<<endl;
}
void yogi::print1()
{
    cout<<"I am Superman!!"<<endl;
}
void yogi::print2()const
{
    cout<<"it is constant function."<<endl;
}
