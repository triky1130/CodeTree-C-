#include <iostream>
using namespace std;

int main() {
    string fruits[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char a;
    cin >> a;

    int cnt = 0;

    for(int i = 0; i < 5; i++){
        if(fruits[i][2] == a || fruits[i][3] == a){
            cout << fruits[i] << endl;
            cnt += 1;
        }
    }

    cout << cnt << endl;
    return 0;
}