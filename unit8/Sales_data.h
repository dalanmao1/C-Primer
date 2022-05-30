#include <iostream>

class Sales_data
{
    //��Ԫ�������޸�private
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, Sales_data &item);

public:
    /*4�ֹ��캯����ʽ��Ĭ�ϣ�ֱ�Ӹ�����Ӹ������뷽ʽ*/
    // Sales_data() = default;
    // Sales_data(const std::string &s) : bookNo(s){};
    // Sales_data(const std::string &s, const unsigned num,
    //            const double sellp, const double salep);
    // Sales_data(std::istream &is);
    /*------------------------------------------------------*/
    /*ί�й��캯��*/
    Sales_data(const std::string &s, unsigned num, double sellp, double salep)
        : bookNo(s), units_sold(num), sellingprice(sellp), saleprice(salep)
    {
        if (sellingprice != 0)
            discount = saleprice / sellingprice;
        std::cout << "�ù��캯��������������������ԭ�ۡ�ʵ�������ĸ���Ϣ" << '\n';
    };
    //������ί�й��캯��
    Sales_data() : Sales_data("", 0, 0, 0)
    {
        std::cout << "�ù��캯���������κ���Ϣ" << '\n';
    };
    Sales_data(const std::string &s) : Sales_data(s, 0, 0, 0)
    {
        std::cout << "�ù��캯������������Ϣ" << '\n';
    }
    Sales_data(std::istream &is) : Sales_data()
    {
        read(is, *this);
        std::cout << "�ù��캯�������û�������Ϣ" << '\n';
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
/*��������������д��Sales_data.c�ļ����棬��ʹ���������Ҳ���У�����һ������*/
//�����Զ��幹�캯��������
std::istream &read(std::istream &is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    item.discount = item.saleprice / item.sellingprice;
    return is;
}
std::ostream &print(std::ostream &os, Sales_data &item)
{
    os << item.bookNo << ' '
       << item.units_sold << ' ' << item.sellingprice << ' ' << item.saleprice << std::endl; // endl���޷�ʶ��
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
//     // is >> *this;����д������>>���벻��Sales_data���͡��������������>>�����
//     read(is, *this);
// };
