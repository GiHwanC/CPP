/* 10.12 map으로 영한 사전 만들기 */
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void) {
    map<string, string> dic; //맵 컨테이너 생성. 키는 영어단어, 값은 한글 단어

    dic.insert(make_pair("love", "사랑"));
    dic.insert(make_pair("apple", "사과"));
    dic["cherry"] = "체리";

    cout << "저장된 단어 개수 " << dic.size() << endl;
    string eng;
    while(true){
        cout << "찾고 싶은 단어>> ";
        getline(cin, eng);
        if (eng == "exit")
            break;
        
        if (dic.find(eng)==dic.end()) // 키를 끝까지 찾았는데 없음
            cout << "없음" << endl;
        else
            cout << dic[eng] << endl; // dic에서 eng의 값을 찾아 출력
    }
    cout << "종료합니다..." << endl;

    return 0;
}