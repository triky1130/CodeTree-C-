#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    //배열에 인덱스는 0부터니까 순서대로 입력받기
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //인덱스 0까지 돌아야하므로 0은 이상이고, i는 인덱스에서 n-1
    for(int i = n-1; i >= 0; i--){
        if(arr[i] % 2 == 0){
            cout << arr[i] << " ";
        }
    }
    return 0;
}