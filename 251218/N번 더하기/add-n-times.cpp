#include <iostream>
using namespace std;

int main() {
    int A, N, i;
    1 <= A,N <= 10;
    cin >> A >> N;

    for(i = 0; i < N; i++){
        A += N;
        cout << A << "\n";
    }
    // Please write your code here.
    return 0;
}