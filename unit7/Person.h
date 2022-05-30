#include <iostream>

class Person
{
    friend std::istream &read(std::istream &is, Person &item);
    friend std::ostream &print(std::ostream &os, Person &item);

private:
    std::string strName;
    std::string strAddress;

public:
    Person() = default;
    Person(const std::string name) : strName(name), strAddress(){};
    Person(const std::string name, const std::string address);
    Person(std::istream &is);

public:
    std::string getName() const { return strName; }
    std::string getAddress() const { return strAddress; }

    std::istream &read(std::istream &is, Person &per)
    {
        is >> per.strName >> per.strAddress;
        return is;
    }
    std::ostream &printf(std::ostream &os, const Person &per)
    {
        os << per.getName() << per.getAddress();
        return os;
    }
};
std::istream &read(std::istream &is, Person &item)
{
    is >> item.strName >> item.strAddress;
    return is;
}
std::ostream &print(std::ostream &os, Person &item)
{
    os << item.strName << item.strAddress << std::endl; // endl它无法识别
    return os;
}
Person::Person(const std::string name, const std::string address)
{
    strName = name; //不需要Person.strName=name，因为这是构造函数，还没构造好对象呢
    strAddress = address;
}
Person::Person(std::istream &is)
{
    read(is, *this);
}
