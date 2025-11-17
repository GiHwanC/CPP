/* 7.5 두개의 power 객체를 비교하는 == 연산자 작성 */
#include <iostream>
using namespace std;

class Power
{
private:
    int kick;
    int punch;

public:
    Power(int kick = 0, int punch = 0)
    {
        this->kick = kick;
        this->punch = punch;
        cout << "생성자 호출" << " kick : " << kick << " punch : " << punch << endl;
    }
    Power(const Power &p)
    {
        this->kick = p.kick;
        this->punch = p.punch;
        cout << "복사 생성자 호출" << " kick : " << kick << " punch : " << punch << endl;
    }
    void show();
    bool operator==(const Power &op2); // == 연산자 함수 선언
};

void Power::show()
{
    cout << "show() 호출 " << "kick : " << this->kick << " punch : " << this->punch << endl;
}

bool Power::operator==(const Power &op2)
{
    if (this->kick == op2.kick && this->punch == op2.punch)
        return true;
    else
        return false;
}

int main(int argc, char *argv[])
{
    Power a;
    Power b(1);
    Power c(2, 3);
    // Power d(c);  // 복사생성자(호출)
    Power d = c; // 복사생성자(호출), Power d; d = c;(호출X)
    // cout << d.kick << endl;
    d.show();

    if (a == b) // c.==(b)
        cout << "a, b 두 파워가 같다" << endl;
    else
        cout << "a, b 두 파워가 다르다" << endl;

    if (c == d) // c.==(b)
        cout << "c, d 두 파워가 같다" << endl;
    else
        cout << "c, d두 파워가 다르다" << endl;

    a.show();
    b.show();
    c.show();

    return 0;
}