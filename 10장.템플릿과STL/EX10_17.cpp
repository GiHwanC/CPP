/* 10.17 반지름이 r인 원의 면적을 리턴하는 람다식 만들기 */
#include <iostream>
using namespace std;

int main(void) {
    double pi = 3.14;

    auto calc = [pi](int r)->double { return pi * r * r; };

    cout << "면적은 " << calc(3);
    
    return 0;
}