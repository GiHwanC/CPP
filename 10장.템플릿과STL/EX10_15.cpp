/* 10.15 매개변수 x,y의 합을 출력하는 람다식 만들기 */

#include <iostream>
using namespace std;

int main(void) {
    [](int x, int y)
    { cout << "합은 " << x + y; }(2, 3); // 람다식 실행, 5출력
    return 0;
}