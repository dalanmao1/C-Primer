#include <iostream>
#include <vector>
using namespace std;

void recursive(vector<int> ivec, int sz) //传入迭代器好像不行，不知道为什么
{
    if (sz == ivec.size())
    {
    }
    else
    {
        cout << ivec[sz] << endl;
        recursive(ivec, sz + 1);
    }
}

int main(int argc, char const *argv[])
{
    vector<int> ivec{1, 3, 5, 7, 9, 11, 13};
    recursive(ivec, 0);
    return 0;
}
