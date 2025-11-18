/* 10.9 vector 컨테이너 활용 */
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    v[0] = 10;
    int m = v[2];
    v.at(2) = 5;

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}