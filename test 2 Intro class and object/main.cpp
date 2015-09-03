#include <iostream>

using namespace std;
class yogi{
    public:
        yogi()
        {
            cout<<"I called automatically, yuppee!"<<endl;
            printvalues();

        }
    void printvalues()
    {

    cout << "the input values are!"<<endl<<x<<","<<y << endl;
    name="yogesh Dhada";
    cout <<"my nane is "<<name<<endl;
    }
    private:
        int x=0,y=20;
        string name;

};
int main()
{
    yogi ya;
    //cout << "Hello world!" << endl;
    return 0;
}
