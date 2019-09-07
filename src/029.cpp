/**
  @file 029.cpp
  @title  No.29 パワーアップ - yukicoder
  @url https://yukicoder.me/problems/no/29
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

template <class T1, class T2>
void show(map<T1, T2>& m) {
  for (auto e : m) {
    std::cout << e.first << " " << e.second << "\n";
  }
}

int main() {
  int N;
  cin >> N;
  map<int, int> m;

  int a, b, c;
  REP(i, N) {
    cin >> a >> b >> c;
    m[a]++;
    m[b]++;
    m[c]++;
  }

  LL ans = 0;
  for (int i = 1; i <= 10; i++) {
    ans += floor(m[i] / 2);
    m[i] -= 2 * floor(m[i] / 2);
  }

  LL sum = 0;
  for (int i = 1; i <= 10; i++) {
    sum += m[i];
  }
  ans += floor(sum / 4);

  cout << ans << endl;
  return 0;
}
