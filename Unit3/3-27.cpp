#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    unsigned buf_size = 1024;
    int arry[buf_size];
    cout << sizeof(arry) << endl;
    //上面这样虽然通过编译，数组大小4096，但是这样不合法，因为中间要是buf_size变了就不是预期的值了，最好加上const

    char str[12] = "fundamental";
    cout << str << endl;
    // st[11]会报错，因为最后有个'/0'
    return 0;
}
