/* 6장 함수 중복 */

/* 함수 중복 조건
   - 중복된 함수들의 이름이 동일하여야 한다
   - 중복된 함수들은 매개 변수 타입이나 매개변수의 개수가 달라야한다
   - 함수 중복에 리턴 타입은 고려되지 않는다
*/

int sum(int a, int b, int c){
    return a + b + c;
}

int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}