/* string class 개요 */
/*
    c++에서 문자열을 다루는 방법(2)
    1. C-스트링
        : C언어에서 사용해오던 전통적인 문자열 '\0'로 끝나는 문자 배열을 문자열로 취급하는 방법
    2. string 클래스
        : #include <string>
          using namespace std;
    EX) string str = "I Love ";
        str.append("C++"); // str = I Love C++

    - string 객체 생성
      string str; // 빈 문자열을 가진 스트링 객체
      string address("서울시 성북구 삼선동 389"); // 문자열 리터럴로 초기화
      string CopyAddress(address); // address를 복사한 copyAddress 생성

    - string 객체가 가진 문자열 출력
      cout << address << endl;
      cout << title << endl;

    - string 객체의 동적 생성
      string *p = new string("C++"); // 스트링 객체 동적 생성
      cout << *p; // C++ 출력
      p->append(" Great!!"); // p가 가리키는 스트링이 "C++ Great!!"가 됨
      cout << *p; // "C++ Great!!" 출력
      delete p; // 스트링 객체 반환

    - string 클래스의 주요 생성자
      string()                     : 빈 문자열을 가진 스트링 객체 생성
      string(const string& str)    :  str을 복사한 새로운 스트링 객체 생성
      string(const char *s)        : C-스트링 s의 문자열을 복사하여 스트링 객체 생성
      string(const char *s, int n) : 문자 배열 s에서 n개의 문자를 복사하여 스트링 객체 생성





*/