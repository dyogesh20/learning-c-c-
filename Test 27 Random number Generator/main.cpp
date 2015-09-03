#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    for(int a=1; a<10;a++){
        cout<<"the number is  : "<<rand()%4<<endl;
        cout<<"time is: "<<time(0)<<endl;}
    return 0;
}
