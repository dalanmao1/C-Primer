#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
void zhizhen(void)
{
    int a = 1024;
    int *ia = &a;                   //&在右边，叫作取地址，&a是变量a的地址
    int &b = a;                     //&在左边，叫作引用，b和a一样
    cout << "&a  =" << &a << endl;  //&a是变量a的地址
    cout << "ia  =" << ia << endl;  // ia是指向a的指针，输出ia的内容即a的地址
    cout << "&ia =" << &ia << endl; //&ia是指针ia的地址，系统分配的
    cout << "*ia =" << *ia << endl; //*是解地址，即取ia所指向的值
    cout << "  a =" << a << endl;   // a的值
    cout << "  b =" << b << endl;   //注意，b是a的另一个名字而已
    cout << " &b =" << &b << endl;  // a和b是同一个变量，所以输出地址一样
}
void shuzu(void)
{
    int ia[5] = {1, 2, 3, 4, 5};
    cout << "       ia =" << ia << endl;        //数组名
    cout << "      &ia =" << &ia << endl;       //取数组名的地址
    cout << " &(ia[0]) =" << &(ia[0]) << endl;  //数组名ia是数组第一个元素的地址
    cout << "      *ia =" << *ia << endl;       //*ia是数组第一个元素的值
    cout << "*(ia + 1) =" << *(ia + 1) << endl; //*(ia + 1)是数组第2个元素的值
}
void shuzu2(void)
{
    int ia[3][4] = {1, 2, 3, 4,
                    5, 6, 7, 8,
                    9, 10, 11, 12};

    cout << "         ia =" << *ia << endl;        //数组名
    cout << "        *ia =" << *ia << endl;        //*ia可以看成一维数组的数组名
    cout << "       **ia =" << **ia << endl;       //数组第一个元素
    cout << "   **(ia+1) =" << **(ia + 1) << endl; //第二行第一列的元素
    cout << "   *(ia[0]) =" << *(ia[0]) << endl;   //第一行第一列的元素
    cout << "        &ia =" << &ia << endl;        //取数组名的地址
    cout << "   &(ia[0]) =" << &(ia[0]) << endl;
    cout << "&(ia[0][0]) =" << &(ia[0][0]) << endl; //首元素地址
    cout << "&(ia[0][2]) =" << &(ia[0][2]) << endl; //首元素地址
    cout << "&(ia[0][3]) =" << &(ia[0][3]) << endl; //首元素地址
    cout << "&(ia[1][0]) =" << &(ia[1][0]) << endl; //首元素地址
    cout << "&(ia[1][1]) =" << &(ia[1][1]) << endl; //首元素地址

    cout << ia[1][1] << endl;         //只用数组小标
    cout << *(*(ia + 1) + 1) << endl; //只用*
    cout << *(ia[1] + 1) << endl;     //混合使用
    cout << (*(ia + 1))[1] << endl;   //混合使用
}

int main(int argc, char const *argv[])
{
    // zhizhen();
    // shuzu();
    shuzu2();
    return 0;
}