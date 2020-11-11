// 偶数データの列挙
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // 入力データをNに代入

    for (int i = 2; i <= N; i += 2) {
        cout << i << endl; // cout << で出力、endlで改行
    }
}
