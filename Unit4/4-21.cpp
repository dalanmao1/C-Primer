#include <iostream>
#include <vector>
using namespace std;
vector<int> vInt;

void find_odd(vector<int> &vInt) //如果是vector<int> vInt，表示只读不可修改
{
    vector<int>::iterator it = vInt.begin();
    for (; it != vInt.end(); it++)
    {
        if (*it % 2 == 1)
        {
            *it *= 2;
        }
    }
}

int main(int argc, char const *argv[])
{
    const int sz = 10;
    for (int i = 0; i < sz; i++)
    {
        vInt.push_back(rand() % 100);
        cout << vInt[i] << ' ' << ends;
    }
    cout << endl;
    find_odd(vInt);
    for (int it : vInt) //容器的数归根还是int
    {
        cout << it << ' ' << ends;
    }
    return 0;
}
