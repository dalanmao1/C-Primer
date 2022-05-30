#include <iostream>
#include <string>
using namespace std;

int isAll(const string &str)
{
    for (auto i : str)
    {
        if (isupper(i))
            return 1;
    }
    return 0;
}
void changetolower(string &str)
{
    for (auto &i : str)
    {
        if (isupper(i))
            i = tolower(i);
    }
}
int main(int argc, char const *argv[])
{
    string str = "ssHsss";
    cout << (isAll(str) ? "有大写" : "没有大写") << endl;
    changetolower(str);
    cout << str << endl;
    return 0;
}
