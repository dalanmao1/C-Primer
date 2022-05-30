#include <cstring>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  //   char ca1[] = {'h', 'i', ',', '\0'};//用c风格的话最后一定要加\0
  //   char ca2[] = {'s', 'b', 'n', '\0'};//不然肯定出错
  char ca1[] = "hi,"; //推荐这个，不易出错，又简洁
  char ca2[] = "sbn";
  char ca0[7];
  strcpy(ca0, ca1);
  strcat(ca0, ca2);
  cout << ca0 << endl; //如果是int数组注意，这样写输出首地址
  return 0;
}
