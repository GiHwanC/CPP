/* 6.4 디폴트 매개 변수를 가진 함수 만들기 연습 */
#include <iostream>
using namespace std;

void f(char c = ' ', int line = 1);

void f(char c, int line){
    for (int i = 0; i < line; i++){
        for (int j = 0; j < 10; j++){
            cout << c;
        }
        cout << endl;
    }
}

int main(void)
{
    f();
    f('%');
    f('@', 5);

    return 0;
}