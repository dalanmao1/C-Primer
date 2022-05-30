#include <iostream>

class Window_mgr
{
public:
    void clear();
};

class Screen
{
    // friend void Window_mgr::clear();
    friend class Window_mgr; //定义友元类，该类成员函数可改变private的值
private:
    unsigned height;
    unsigned width;
    unsigned cursor;
    std::string contents;
    mutable size_t acess_ctr;

public:
    typedef unsigned pos; // pos是Screen类专有的，后面有用

public:
    Screen() = default;
    Screen(unsigned h, unsigned w, char c) : height(h), width(w), contents(h * w, c){};
    Screen(unsigned h, unsigned w, unsigned c, std::string con, size_t ac);

public:
    void some_member() const;
    pos size() const;
    Screen move(unsigned r, unsigned c)
    {
        cursor = r * width + c;
        return *this;
    }
    Screen set(char ch)
    {
        contents[cursor] = ch;
        return *this;
    }
    Screen &set(unsigned r, unsigned c, char ch)
    {
        contents[r * width + c] = ch;
        return *this;
    }
    void display(std::ostream &os)
    {
        os << contents << ' ' << cursor << '\n';
    }
};
//构造函数，定义在类内类外都可以
Screen::Screen(unsigned h, unsigned w, unsigned c, std::string con, size_t ac)
{
    height = h;
    width = w;
    cursor = c;
    contents = con;
    acess_ctr = ac;
}
void Screen::some_member() const //在类外定义成员函数是要提供类名+函数名
{
    ++acess_ctr; //因为acess_ctr是mutable
    std::cout << acess_ctr << '\n';
}
// pos是Screen类专有的，如果是unsigned等，前面不用加Screen::
Screen::pos Screen::size() const
{
    return height * width; //已经声明在Screen类作用域内了，所以不用再Screen::
}
void Window_mgr::clear()
{
    Screen myScreen(10, 20, 'X');
    std::cout << "清理之前的内容是：" << '\n';
    std::cout << myScreen.contents << '\n';
    myScreen.contents = "";
    std::cout << "清理之后的内容是：" << '\n';
    std::cout << myScreen.contents << '\n';
}