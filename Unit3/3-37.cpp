#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
  // const char ca[] = {'h', 'e', 'l', 'l',
  // 'o'};//错误，没有\0,c++中指针会一直指下去，直到遇到\0
  const char ca[] = {'h', 'e', 'l', 'l', 'o', '\0'};  //正确，及时“刹车”
  const char *cp = ca;
  while (*cp) {
    cout << *cp << endl;
    cp++;
  }

  return 0;
}
