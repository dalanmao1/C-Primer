#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using int_arry = int[4];

void for_out(void)
{
    int ia[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int_arry &row : ia)
    {
        for (int i : row)
        {
            cout << ' ' << i << ends;
        }
    }
}
int main(int argc, char const *argv[])
{
    for_out();
    return 0;
}
