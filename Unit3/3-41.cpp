#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int arry[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    //方法1
    // vector<int> vec;
    // for (auto p : arry) //用这个就不要知道数组大小了
    //     vec.push_back(p);

    vector<int> vec{begin(arry), end(arry)}; //方法2，简单粗暴，注意这种赋值方法
    for (auto i : vec)
        cout << i << endl;
    return 0;
}
