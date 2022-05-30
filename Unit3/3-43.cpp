#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
void for_out(int ia[3][4], int m, int n)
{
    for (auto i = 0; i < m; i++)
    {
        for (auto j = 0; j < n; j++)
        {
            cout << ia[i][j] << ' ' << ends;
        }
    }
}
void for_out2(int (*ia)[4])
{
}
int main(int argc, char const *argv[])
{
    int ia[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // for (auto &row : ia)
    // {
    //     for (auto a : row)  //可以修改元素的值
    //     {
    //         cout << a << ' ' << ends;
    //     }
    // }

    for (int(&row)[4] : ia)
    {
        for (int a : row) //只读。可读可写改成for (int &a : row)
        {
            cout << a << ' ' << ends;
            a = 1;
        }
    }

    for (int(&row)[4] : ia)
    {
        for (int a : row) //可以改变元素的值
        {
            cout << a << ' ' << ends;
        }
    }
    return 0;
}
