#include <iostream>
#include <string>
using namespace std;

class Point
{
protected:
    int x, y; // 한점 (x,y) 좌표값
public:
    void set(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void showPoint()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

class ColorPoint : public Point
{
    string color;

public:
    void setColor(string color) { this->color = color; }
    void showColorPoint();
    bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint()
{
    cout << color << ":";
    showPoint(); // Point 클래스의 showPoint() 호출
}

bool ColorPoint::equals(ColorPoint p)
{
    if (x == p.x && y == p.y && color == p.color) // 1
        return true;
    else
        return false;
}

int main()
{
    Point p;     // 기본 클래스의 객체 생성
    p.set(2, 3); // 2
    // p.x = 5;     // 3
    // p.y = 5;     // 4
    p.showPoint();

    ColorPoint cp; // 파생 클래스의 객체 생성
    // cp.x = 10;     // 5
    // cp.y = 10;     // 6
    cp.set(3, 4);
    cp.setColor("Red");

    ColorPoint cp2;
    cp2.set(3, 4);
    cp2.setColor("Red");
    cout << ((cp.equals(cp2)) ? "true" : "false"); // ��
}