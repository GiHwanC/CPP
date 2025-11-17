/* 7.6 두 개의 Power 객체를 더하는 += 연산자 작성 */
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
    Power &operator+=(const Power &op2); // == 연산자 함수 선언
};

void Power::show()
{
    cout << "kick : " << this->kick << " punch : " << this->punch << endl;
}

Power& Power::operator+=(const Power &op2)
{
    this->kick = this->kick + op2.kick;
    this->punch = this->punch + op2.punch;
    return *this;
}

int main(int argc, char *argv[])
{
    Power a(3, 5), b(4, 6), c;
    a.show();
    b.show();
    c = a += b;
    a.show();
    b.show();

    return 0;
}