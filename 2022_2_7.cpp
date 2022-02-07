#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int f[40][2];

int main()
{
    // clock_t start, end;
    // start = time(NULL);

    f[0][0] = 1;
    f[0][1] = 0;
    f[1][0] = 0;
    f[1][1] = 1;

    int T;

    cin >> T;

    int N[T];

    for(int j=0; j < T; j++) {
        cin >> N[j];
    }

    for(int j=0; j < T; j++) {

        for(int i = 2; i <= N[j]; i++) {
            // if(i-1 == 0 || i-2 == 0) f[i][0]++;
            // if(i-1 == 1 || i-2 == 1) f[i][1]++;
            f[i][0] = f[i-1][0] + f[i-2][0];
            f[i][1] = f[i-1][1] + f[i-2][1];
        }

        cout << f[N[j]][0] << " " << f[N[j]][1] << endl;
    }

    // end = time(NULL);
    // cout << (end - start) << endl;
}
