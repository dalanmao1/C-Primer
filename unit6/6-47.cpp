#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> vInt, unsigned index)
{
    unsigned sz = vInt.size();
#ifndef NDEBUG
    cout << "大小是" << sz << endl;
#endif
    if (index < sz)
    {
        cout << vInt[index] << endl;
        print(vInt, index + 1);
    }
}

int main(int argc, char const *argv[])
{
    vector<int> vInt = {1, 3, 5, 7, 9};
    print(vInt, 0);
    return 0;
}
