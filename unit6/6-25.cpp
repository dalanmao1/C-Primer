#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    for (int i = 0; i != argc; ++i)
    {
        str += argv[i][1];
    }
    cout << str << endl;
    return 0;
}
