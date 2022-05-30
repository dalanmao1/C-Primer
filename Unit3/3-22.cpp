#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s1;
    vector<string> text;
    vector<string>::iterator it = text.begin();
    while (getline(cin, s1))
    {
        text.push_back(s1);
    }

    for (it = text.begin(); it < text.end(); it++)
    {
        for (auto i = it->begin(); i < it->end(); i++)
        {
            *i = toupper(*i);
        }
        cout << *it << ' ' << ends;
    }
    return 0;
}
