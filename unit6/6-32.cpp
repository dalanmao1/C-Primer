#include <iostream>
using namespace std;

int &get(int *arry, int index)
{
    return arry[index];
}

int main(int argc, char const *argv[])
{
    int ia[10] = {1, 2, 3, 4, 5};
    cout << get(ia, 2) << endl;
    return 0;
}
