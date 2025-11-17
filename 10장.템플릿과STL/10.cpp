/* 10 일반화와 템플릿 */
#include <iostream>
using namespace std;

/*
void myswap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void myswap(double &a, double &b)
{
    double tmp;
    tmp = a;
    a = b;
    b = tmp;
}
*/
template <class T>
void myswap(T &a, T &b){
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <class T1, class T2>
void myswap(T1 &a, T2 &b){
    T1 = tmp1, T2 = tmp2;
    
}

int main()
{
    int a = 4, b = 5;
    myswap(a, b); // myswap(int& a, int& b)  ȣ��
    cout << a << '\t' << b << endl;

    double c = 0.3, d = 12.5;
    myswap(c, d); // myswap(double& a, double& b) ȣ��
    cout << c << '\t' << d << endl;

    
    myswap(a, c); // myswap(double& a, double& b) ȣ��
    cout << c << '\t' << d << endl;

    char e = 'A', f = 'B';
    myswap(e, f); // myswap(char& a, char& b) ȣ��
    cout << e << '\t' << f << endl;
}