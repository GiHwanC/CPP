/* 6.6 중복된 생성자들을 디폴트 매개 변수를 이용한 간소화 연습 */
#include <iostream>
#include <cstring>
using namespace std;

class MyVector
{
    char *name;
    int size;

public:
    MyVector(const MyVector &v);

    MyVector(int n = 100)
    {
        this->name = new char[n];
        this->size = n;
    }
    ~MyVector()
    {
        delete[] name;
    }
    void setName(const char *pName)
    {
        strcpy(this->name, pName);
    }
    char *getName()
    {
        return this->name;
    }
};

MyVector::MyVector(const MyVector &v)
{
    int len = strlen(v.name);
    this->name = new char[len + 1];
    strcpy(this->name, v.name);
}

int main(void)
{
    MyVector *v1, *v2;
    v1 = new MyVector();
    // strcpy(v1->name, "홍길동");
    // cout << v1->name << endl;
    v1->setName("홍길동");
    cout << v1->getName() << endl;

    // 복사 생성자 구현
    MyVector myVector(*v1);
    cout << myVector.getName() << endl; // 홍길동

    v1->setName("이순신");
    cout << v1->getName() << endl;      // 이순신
    cout << myVector.getName() << endl; // 홍길동

    v2 = new MyVector(1024);

    delete v1;
    delete v2;

    return 0;
}
