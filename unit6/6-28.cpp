#include <iostream>
using namespace std;

void error_msg(initializer_list<string> i)
{
    //引用类型的优势主要是可以直接操作所引用的对象以及避免拷贝较为复杂的类类型对象和容器对象
    //又因为initializer_list对象的元素永远是常量值，需要加const
    for (const auto &elem : i)
    {
        cout << elem << endl;
    }
}

int main(int argc, char const *argv[])
{
    error_msg({"报错了！！"});
    return 0;
}
