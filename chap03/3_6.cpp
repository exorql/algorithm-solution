#include <iostream>
#include <vector>
using namespace std;

int main() {
  // 入力受け取り
  int N, W;
  cin >> N >> W;
  // N個のvector（可変長配列）を生成
  vector<int> a(N);
  
  for (int i = 0; i < N; ++i) cin >> a[i];
  
  // bitは2^N通りの部分集合全体を動く
  bool exist = false;
  for (int i=0; bit < (1 << N); ++bit)
  {
    int sum = 0; // 部分集合に含まれている要素の和
    for (int i = 0; i < N; ++i) {
      // i番目の要素a[i]が部分集合に含まれているかどうか
      if (bit & (1 << i)) {
        sum += a[i]
      }
    }
    
    // sum が W に一致するかどうか
    if (sum == W) exist = true;
  }
  if (exist) cout << "Yes" << endl;
  else cout << "No" << endl;
}
