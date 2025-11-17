/* 8.1 Point 클래스를 상속받는 ColorPoint 클래스 만들기 */
#include <iostream>
using namespace std;

class Point
{             // 2차원 평면에서 한 점을 표현하는 클래스 point 선언
    int x, y; // 한 점 (x,y) 좌표값
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
{                 // 2차원 평면에서 컬러 점을 표현하는 클래스 ColorPoint.Point를 상속받음
    string color; // 점의 색 표현
public:
    void setColor(string color)
    {
        this->color = color;
    }
    void showColorPoint();
};

void ColorPoint::showColorPoint()
{
    cout << color << ":";
    showPoint(); // Point의 showPoint() 호출
}

int main(void)
{
    Point p;             // 기본 클래스의 객체 생성
    ColorPoint cp;       // 파생 클래스의 객체 생성
    cp.set(3, 4);        // 기본 클래스의 멤버 호출
    cp.setColor("Red");  // 파생 클래스의 멤버 호출
    cp.showColorPoint(); // 파생 클래스의 멤버 호출

    Point *pP;
    pP = &cp; // 업캐스팅
    pP->set(1, 2);
    pP->showPoint();
//    pP->setColor("Red");    // 접근 불가
//    pP->showColorPoint();   // 접근 불가

    ColorPoint *pCp = &cp;
    pCp = (ColorPoint *)pP; // 다운 캐스팅
    pCp->setColor("Red");   
    pCp->showColorPoint();

    return 0;
}