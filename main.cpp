#include <iostream>
using namespace std;


int max(int num1, int num2);
int sum(int a, int b=20);

int main() {
    int mx = max(1,2);
    cout<<mx<<endl;



    // 局部变量声明
    int a = 100;
    int b = 200;
    int result;

    // 调用函数来添加值
    result = sum(a, b);
    cout << "Total value is :" << result << endl;

    // 再次调用函数
    result = sum(a);
    cout << "Total value is :" << result << endl;




    return 0;
}


int max(int num1, int num2)
{
    // 局部变量声明
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}


int sum(int a, int b)
{
    int result;

    result = a + b;

    return (result);
}