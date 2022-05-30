#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int ival = 5;
    double dval = 5;
    ival *= static_cast<int>(dval);
    cout << ival << endl;
    return 0;
}
