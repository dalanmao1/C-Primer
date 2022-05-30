#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<unsigned> grade(11);
    unsigned gra;
    auto it = grade.begin();

    while (cin >> gra)
    {
        (*(it + gra / 10))++;
    }
    for (it = grade.begin(); it != grade.end(); it++)
    {
        cout << *it << ' ' << ends;
    }
    return 0;
}
