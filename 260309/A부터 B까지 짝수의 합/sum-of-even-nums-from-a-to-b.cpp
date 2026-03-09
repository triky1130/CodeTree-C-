#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int total = 0;

    cin >> a >>b;

    for(int i = a; i <= b; i++){
        if(i % 2 ==0){
            total += i;
        }
    }

    cout << total << endl;
    return 0;
}