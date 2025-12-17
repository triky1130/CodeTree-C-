#include <iostream>
using namespace std;

int main() {
    int A,B;
    1 <= A;
    B <= 100;
    
    cin >> A >> B;
    cout << fixed;
    cout.precision(1);
    
    double a = (double)A;
    double b = (double)B;

    double total = a + b;
    double avg = total / 2;
    cout << A + B << " " << avg << "\n";// Please write your code here.
    return 0;
}