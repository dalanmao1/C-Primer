#include <iostream>
using namespace std;

typedef string Type;
Type initVal();
class Exercise
{
public:
    typedef double Type;
    Type setVal(Type); //用的typedef double Type;
    Type initVal();    //用的typedef double Type;

private:
    int val;
};
Type Exercise::setVal(Type parm) //返回值typedef string Type；参数typedef double Type
{
    val = parm + initVal(); //用的Exercise类的Type initVal();
    return val;
}
int main(int argc, char const *argv[])
{

    return 0;
}
