#include <iostream>

using namespace std;
void printarray(int ar[], int sizea)
{
    for(int i=0;i<sizea;i++)
    {
        cout<<ar [i]<<endl;
    }

}

int main()
{
    int ar[1000];
    int sizea;
    cout <<"the length of array is :  "<<sizeof(ar)/sizeof(ar[0])<<endl;
    cout<<"Enter size of array:"<<endl;
    cin>>sizea;
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<sizea;i++)
    {
        cin>>ar[i];
    }

    cout <<"size of array is: "<<sizeof(ar)<<endl;
    cout<<"--------- Now the elements of array are------------ "<<endl;
    printarray(ar,sizea);
    cout << "Hello world!" << endl;
    return 0;
}
