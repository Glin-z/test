#include <iostream>
#include <cmath>
#include <cstdlib>  //里面有随机函数,还有exit();功能是停止程序
#include <string>   //可定义字符串类型，如String str = "how are you?";
#include <cstring>  //含strlen(),strcat()等函数
#include <vector>  // vector<char> brr(n); == char brr[n];  //数组存放在堆中
#include <array>   // array<int, 5> arr; == int arr[5];     //数组存放在栈中
#include <fstream>


using namespace std; //名称空间
typedef char zifu;

namespace box {
    double apple;
    int banana;
    float grape;
}//将特定名称添加到它所属的声明区域中

// int main()
// {
//     using box::apple;    //using namespace box;
//     cin >> apple;

//     int function;
//     int & func = function; // 给function起个小名
//     cin >> function;
//     cout << func << endl;


//     return 0;
// }
