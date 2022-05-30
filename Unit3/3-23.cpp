#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> num{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto p = num.begin(); p != num.end(); p++)
    {
        (*p) *= 2;
        cout << *p << ' ' << ends;
    }
    return 0;
}
