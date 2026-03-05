#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int array[N];
    int squared[N];

    for(int i = 0; i < N; i++){
        cin >> array[i];
    }

    for(int i = 0; i < N; i++){
        squared[i] = array[i] * array[i];
    }

    for(int i = 0; i < N; i++){
        cout << squared[i] << " ";
    }
    return 0;
}