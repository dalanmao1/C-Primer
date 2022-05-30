#include <iostream>
using namespace std;
int iCount(initializer_list<int> i)
{
    int count = 0; //这边一定要初始化
    for (auto val : i)
    {
        count += val;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int i[2] = {1, 5};
    cout << iCount({1, 5, 9}) << endl;
    return 0;
}
