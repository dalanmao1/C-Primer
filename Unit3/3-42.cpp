#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec{9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arry[vec.size()] = {};
    auto beg = vec.begin();
    for (auto &i : arry)
    {
        i = *beg;
        beg++;
    }
    for (auto i : arry)
        cout << i << ' ' << ends;

    return 0;
}
