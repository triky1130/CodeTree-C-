#include <iostream>
using namespace std;

int main() {
    int n =10;
    char array[10];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    for(int i = 9; i >= 0; i--){
        cout << array[i];
    }
    return 0;
}