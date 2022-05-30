#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> num{1, 2, 3, 4, 5, 6, 7};
    for (decltype(num.size()) i = 0; i < num.size(); i += 2) // i的类型就是num.size()的类型
    {
        cout << num[i] + num[i + 1] << endl;
    }

    return 0;
}
