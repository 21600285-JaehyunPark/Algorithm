#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

// 실패 원인
// 1. 조합 공식을 이용하여 규칙을 찾아 냈으나 결국 피보나치라는 건 찾지 못했다
// 2. 아마 공식을 알았어도 나머지 연산을 사용하여 계산하는 법은 절대 몰랐을 것이다

int N;
vector<long long> answer = {0,1,2};
void find_answer()
{
    long long tmp;
    for(int i = 3; i <= N; i++)
    {
        tmp = 0;
        tmp = answer[i - 1] + answer[i - 2];
        answer.push_back(tmp%15746);
    }
}
int main() {
    scanf("%d",&N);
    find_answer();
    printf("%lld",answer[N]%15746);
}