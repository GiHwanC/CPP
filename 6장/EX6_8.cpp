/* 6.8 참조 매개변수로 인한 함수 중복의 모호성 */
#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int add(int a, int &b){
    b = b + a;
    return b;
}

int main(void) {
    int s = 10, t = 20;
    // cout << add(s, t);

    return 0;
}