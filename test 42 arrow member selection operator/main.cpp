#include <iostream>
#include "yogi.h"
using namespace std;

int main()
{
    yogi yogiObject;
    yogi *p;
    p = &yogiObject;
    yogiObject.print1();
    p->print1();
    const yogi yogiObject1;
    yogiObject1.print2();
    return 0;
}
