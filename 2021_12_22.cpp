#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lcs[1001][1001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str1;
    string str2;

    cin >> str1;
    cin >> str2;

    int n = str1.length();
    int m = str2.length();

    for(int j=1;j<=m;j++){
        int count = 0;
        for(int i=1;i<=n;i++){
            if(j>0){
                count = max(lcs[i][j-1], lcs[i-1][j]);
                count = max(count, lcs[i-1][j-1] + (str1[i-1] == str2[j-1]));
            }
            lcs[i][j] = count;
            // cout << lcs[i][j] << " ";
        }
        // cout <<endl;
    }
    cout << lcs[n][m] << endl;
}