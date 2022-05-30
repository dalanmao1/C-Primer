#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    double d;
    const string *ps;
    char *pc;
    void *pv;
    // const_cast<string *>(ps);
    pv = static_cast<void *>(const_cast<string *>(ps)); // pv = (void *)ps
    i = static_cast<int>(*pc);                          // i=int(*pc)
    pv = static_cast<void *>(&d);                       // pv=&d，注意这边的void*
    pc = static_cast<char *>(pv);                       // pc=(char*)pv
    return 0;
}
