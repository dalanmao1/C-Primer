#include <iostream>

class Sales_data
{
    //友元，用于修改private
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, Sales_data &item);

public:
    /*4种构造函数方式，默认，直接给，间接给，输入方式*/
    // Sales_data() = default;
    // Sales_data(const std::string &s) : bookNo(s){};
    // Sales_data(const std::string &s, const unsigned num,
    //            const double sellp, const double salep);
    // Sales_data(std::istream &is);
    /*------------------------------------------------------*/
    /*委托构造函数*/
    Sales_data(const std::string &s, unsigned num, double sellp, double salep)
        : bookNo(s), units_sold(num), sellingprice(sellp), saleprice(salep)
    {
        if (sellingprice != 0)
            discount = saleprice / sellingprice;
        std::cout << "该构造函数接受书名、销售量、原价、实际销售四个信息" << '\n';
    };
    //以下是委托构造函数
    Sales_data() : Sales_data("", 0, 0, 0)
    {
        std::cout << "该构造函数不接受任何信息" << '\n';
    };
    Sales_data(const std::string &s) : Sales_data(s, 0, 0, 0)
    {
        std::cout << "该构造函数接受书名信息" << '\n';
    }
    Sales_data(std::istream &is) : Sales_data()
    {
        read(is, *this);
        std::cout << "该构造函数接受用户输入信息" << '\n';
    }
    /*-----------------------------------------------------*/
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;
    double revenue = 0.0;

public:
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &rhs)
    {
        units_sold += rhs.units_sold;
        saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold) / (rhs.units_sold + units_sold);
        if (sellingprice != 0)
            discount = saleprice / sellingprice;
        return *this;
    }
};
/*这两个函数不能写在Sales_data.c文件里面，即使在这边声明也不行，这是一个问题*/
//用于自定义构造函数的输入
std::istream &read(std::istream &is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    item.discount = item.saleprice / item.sellingprice;
    return is;
}
std::ostream &print(std::ostream &os, Sales_data &item)
{
    os << item.bookNo << ' '
       << item.units_sold << ' ' << item.sellingprice << ' ' << item.saleprice << std::endl; // endl它无法识别
    return os;
}
/*-----------------------------------------------------------------------*/

// Sales_data::Sales_data(const std::string &s, const unsigned num,
//                        const double sellp, const double salep)
// {
//     bookNo = s;
//     units_sold = num;
//     sellingprice = sellp;
//     saleprice = salep;
//     if (sellingprice != 0)
//         discount = saleprice / sellingprice;
// }
// Sales_data::Sales_data(std::istream &is)
// {
//     // is >> *this;这种写法错误，>>输入不了Sales_data类型。解决方法：重载>>这个类
//     read(is, *this);
// };
