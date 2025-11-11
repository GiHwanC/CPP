/* 4.11 string 클래스를 이용한 문자열 생성 및 출력 */
#include <iostream>
#include <string>
using namespace std;

int main(){
    //스트링 생성
    string str;
    cout << "str객체의 size : " << sizeof(str) << endl;
    cout << "str객체의 size : " << str.capacity() << endl;

    string address("서울시 국회대로 165");
    cout << "str객체의 size : " << address.capacity() << endl;

    string copyAddress(address); // address의 문자열을 복사한 스트링 객체 생성
    

    char text[] = {'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'}; // C 스트링
    string title(text); // "Love C++" 문자열을 가진 스트링 객체 생성

    // 스트링 출력
    cout << str << endl;    // 빈스트링. 아무값도 출력 안됨
    cout << address << endl;
    cout << copyAddress << endl;
    cout << title << endl;
}