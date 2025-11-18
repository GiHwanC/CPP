/* 10.14 auto를 활용한 변수 선언 */
#include <iostream>
#include <algorithm>
using namespace std;

int square(int x) { return x * x; }

int main(void) {
    auto c = 'a';
    auto pi = 3.14;
    auto ten = 10;
    auto *p = &ten;
    cout << c << " " << pi << " " << ten << " " << *p << endl;

    auto ret = square(3);
    cout << *p << " " << ret << endl;

    vector<int> v = {1, 2, 3, 4, 5};
    // vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << endl;

    // 템플릿에 auto를 사용해서 복잡한 선언의 간소화
    for (auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

        return 0;
}