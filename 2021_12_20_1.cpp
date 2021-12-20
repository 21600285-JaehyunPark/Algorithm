#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count;
    vector<int> arr;

    cin >> count;
    for(int i=0; i < count; i++){
        int n;
        cin >> n;
        arr.push_back(n);
    }

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            if(arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }
}