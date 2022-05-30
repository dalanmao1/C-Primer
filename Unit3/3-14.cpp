#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n1;
    vector<int> num{1, 2};
    cout << "please enter: " << endl;
    while (cin >> n1) //遇非法输入，或者结束标志循环结束    //cin首尾空格都不看，每次循环表示重新读入
    {
        num.push_back(n1);
    }
    for (auto i : num)
    {
        cout << i << endl; //这边用num[i]是不对的，i已经是vector<int>::size type类型了，不是下标
    }

    return 0;
}
