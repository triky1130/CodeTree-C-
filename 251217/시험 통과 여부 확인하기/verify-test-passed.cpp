#include <iostream>
using namespace std;

int main() {
    int N;
    0 <= N <= 100;
    
    cin >> N;
    int x = 80 - N;
    if( N >= 80){
        cout << "pass" << "\n";
    }
    else{
        cout << x << " more score" << "\n";
    }// Please write your code here.
    return 0;
}