#include <iostream>
#include <string>
using namespace std;
/**
 * 三种数组传参
 * 一、指针+长度
 * 二、有限数组
 * 三、不限数组+长度
 **/
// void putPointer(int *arry)这样写是不对的，没有\0，所以没有空指针，指针会一直指下去
// {
//     for (; arry != nullptr; ++arry)
//         cout << *arry << ' ' << ends;
// }
void putPointer(int *arry, int len)
{
    int *end = arry + len;
    while (arry != end)
        cout << *arry++ << ' ' << ends;
}
void putArry1(int arry[], int len)
{
    int *end = arry + len;
    while (arry != end)
        cout << *arry++ << ' ' << ends;
}
void putArry2(int arry[10])
{
    int i = 0;
    while (arry[i] != NULL)
        cout << arry[i++] << ' ' << ends;
}
int main(int argc, char const *argv[])
{
    int arry[10] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    putArry2(arry);
    return 0;
}
