#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1;
    vector<string> str;
    while (cin >> s1)
    {
        str.push_back(s1);
    }
    for (auto i : str)
    {
        cout << i << endl;
    }
    return 0;
}
