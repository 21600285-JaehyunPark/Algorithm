#include <iostream>
#include <vector>
using namespace std;

int fib(int n) {
    if(n <= 1) return 1;
    else return n*fib(n-1);
}

int main() {
    int n;
    cin >> n;

    int num = fib(n);
    cout << num;
}