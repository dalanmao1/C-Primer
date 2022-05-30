#include <iostream>

using namespace std;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {2, 4, 6, 8, 5};
decltype(odd) &arrPtr(int i)
{
    return (i % 2) ? odd : even; //两个数组长度要一样
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
