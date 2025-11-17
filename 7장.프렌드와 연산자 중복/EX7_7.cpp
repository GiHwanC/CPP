/* 7.7 b = a+2;의 +연산자 작성 */
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
    Power(const Power &p)
    {
        this->kick = p.kick;
        this->punch = p.punch;
    }
    void show();
    Power operator+(int op2); // + 연산자 함수 선언
};

void Power::show()
{
    cout << "kick : " << this->kick << " punch : " << this->punch << endl;
}

Power Power::operator+(int op2)
{
    Power tmp;
    tmp.kick = kick + op2;
    tmp.punch = punch + op2;
    return tmp;
}

int main(int argc, char *argv[])
{
    Power a(3, 5), b;
    a.show();
    b.show();
    b = a + 2;
    a.show();
    b.show();

    return 0;
}