#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main()
{
    // clock_t start, end;
    // start = time(NULL);

    int N, K;

    cin >> N >> K;

    int low = 1, high = K;

    int result = -1;

    while (low <= high){
        int cnt = 0;
        int mid = (low + high) / 2;

        for (int i = 1; i <= N; i++)
            cnt += min(mid / i, N); // mid보다 작은 j의 수(i * j <= mid)

        cout << "cnt: " << cnt << endl;
        if (cnt < K){
            low = mid + 1;
            cout << "low: "<< mid <<endl;
        }
        else{
            result = mid;
            high = mid - 1;
            cout << "high: "<< mid <<endl;
        }
    }

    cout << result << "\n";

    // end = time(NULL);
    // cout << (end - start) << endl;
}
