#include "./../include/tporo.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    TPoro t(3,4,3.4);

    TPoro t2=t;

    t2.setx(8);

    cout<<t.getx();
    cout<<t2.getx();

    return 0;
}
