/**
  @file 406.cpp
  @title  No.406 鴨等間隔の法則 - yukicoder
  @url https://yukicoder.me/problems/no/406
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL N;
  cin >> N;
  vector<LL> x(N, 0);
  REP(i, N) {
    cin >> x[i];
  }

  sort(ALL(x));
  LL gap   = abs(x[0] - x[1]);
  LL count = 0;
  REP(i, N - 1) {
    LL res = abs(x[i] - x[i + 1]);
    if (res == 0 || gap != res) count++;
  }

  string ans = (count == 0) ? "YES" : "NO";
  cout << ans << endl;
  return 0;
}
