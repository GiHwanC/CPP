/* 7.1 프렌드 함수 만들기 */
#include <iostream>
using namespace std;

class Rect;
bool equals(Rect &r, Rect &s);

class Rect
{
    int width, height;

public:
    Rect(int width = 1, int height = 1)
    {
        this->width = width;
        this->height = height;
    }
    Rect(const Rect &R)
    {
        this->width = R.width;
        this->height = R.height;
        cout << "w : " << this->width << " h : " << this->height << endl;
    }
    friend bool equals(Rect &r, Rect &s);
};

bool equals(Rect &r, Rect &s)
{
    if (r.width == s.width && r.height == s.height)
        return true;
    else
        return false;
}

int main(void)
{
    Rect a(3, 4), b(4, 5);
    if (equals(a, b))
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    Rect c(a);
    if (equals(a, c))
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    return 0;
}