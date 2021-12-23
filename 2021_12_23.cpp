#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int fib(int n) {
    if(n <= 1) return 1;
    else return n*fib(n-1);
}

int main() {
    int n, need, count = 0;
    cin >> n >> need;

    vector<int> coin;

    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        coin.push_back(num);
    }
    
    // sort(coin.begin(), coin.end());

    // 차례대로 비교하면서 나가기
    // need보다 coin이 크면 다음으로 넘어가기
    // need보다 작을경우, count++, coin을 한번 더 더해서 크면 다음으로 넘어간다

    for(int i=n-1; i>=0; i--){
        // cout << i << " " << coin[i] << endl;
        if(need >= coin[i]) {
            count++;
            need -= coin[i];
            // cout << "need: " <<need << endl;
            i++;
        }
        if(need == 0) break;
    }

    cout << count << endl;
}