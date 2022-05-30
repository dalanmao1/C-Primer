#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    unsigned long ul1 = 3, u12 = 7;
    cout << (ul1 & u12) << endl;
    cout << (ul1 | u12) << endl;
    cout << (ul1 && u12) << endl;
    cout << (ul1 || u12) << endl;
    return 0;
}
