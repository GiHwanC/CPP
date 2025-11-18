/* 9.7 추상 클래스를 상속받는 파생 클래스 구현 연습 */
#include <iostream>
using namespace std;

class Calculator {
    void input() {
        cout << "정수 2개를 입력하세요 >> ";
        cin >> a >> b;
    }
};