#include <iostream>
using namespace std;

int odd(int x) /* 이 부분 */
{
    return (x % 2);
}

int main()
{
    int sum = 0;

    for (int i = 1; i <= 10000; i++)
    {
        if (odd(i))
            sum += i;
    }
    cout << sum;
}

/* 짧은 코드를 함수로 만들면, 함수 호출의 오버헤드가 상대적으로 커서 프로그램 실행 시간이 길어지는 원인이 된다. 
   -> 대안 : 인라인 함수(inline function)
            : 짧은 코드로 구성된 함수에 대해, 함수 호출 오버헤드로 인한 프로그램의 실행 속도 저하를 막기 위해 도입된 기능
      ex) inline int odd(int x) { return x%2 }
*/
