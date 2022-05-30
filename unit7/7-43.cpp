#include <iostream>
#include "NoDefault.h"
using namespace std;

int main(int argc, char const *argv[])
{
    C c(20);
    cout << c.nd.val << endl;
    return 0;
}
