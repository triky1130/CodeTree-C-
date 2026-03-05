#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    int arr[10];
    arr[0] = x; 
    arr[1] = y;

    for(int i = 2; i < 10; i++){
        arr[i] = (arr[i-2] + arr[i-1]) % 10;
    }

    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
}