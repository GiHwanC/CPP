/* 10.1 제네릭 myswap() 함수 만들기 */
#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius=1) {
        this->radius = radius;
    }
    int getRadius() {
        return radius;
    }
};

template <class T>
void myswap(T &a, T &b) // 제네릭 함수
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a = 4, b = 5;
    myswap(a, b); // myswap(int& a, int& b)  ȣ��
    cout << a << '\t' << b << endl;

    double c = 0.3, d = 12.5;
    myswap(c, d); // myswap(double& a, double& b) ȣ��
    cout << c << '\t' << d << endl;

    Circle donut(5), pizza(20);
    myswap(donut, pizza);
    cout << "donut 반지름=" << donut.getRadius() << " , ";
    cout << "pizza 반지름=" << pizza.getRadius() << endl;
}