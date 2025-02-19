#include "./../include/tporo.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    TPoro t(3,4);

    cout<<"Nuevo poro"<<t.getx();
    return 0;
}
