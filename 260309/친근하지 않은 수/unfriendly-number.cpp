#include <iostream>

using namespace std;

int main() {

    int n;
    int cnt = 0;

    cin >> n;

    // 1부터 n까지의 수 중, 2 또는 3 또는 5로 나누어지지 않는 수의 개수를 구합니다.
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
            continue;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}

