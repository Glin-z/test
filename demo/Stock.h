#ifndef STOCK_H_
#define STOCK_H_

#include <string>
using namespace std;

class Stock
{
private://默认为私有
    string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() {total_val = share_val * shares;}
public:
    Stock();//默认Stock类
    Stock(const string & com, long shar = 0, double sha_V = 0);//构造函数
    ~Stock();//析构函数，用于释放构造函数利用new自动分配的内存
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;
};


#endif
