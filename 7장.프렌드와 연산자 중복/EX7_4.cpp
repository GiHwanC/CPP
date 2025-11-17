/* 7.4 두 개의 Power 객체를 더하는 + 연산자 작성 */
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
    }
    void show();
    Power operator+(const Power &op2); // == 연산자 함수 선언
};

void Power::show() {
    cout << "kick : " << kick << " punch : " << punch << endl;
}
Power Power::operator+(const Power &op2){
    Power tmp;  // 임시객체 생성
    tmp.kick = this->kick + op2.kick;
    tmp.punch = this->punch + op2.punch;
    return tmp;
}

int main(void) {
    Power a(3, 5), b(4, 6), c;
    c = a + b;
    a.show();
    b.show();
    c.show();

    return 0;
}