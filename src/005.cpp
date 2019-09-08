/**
  @file 005.cpp
  @title  No.5 数字のブロック - yukicoder
  @url https://yukicoder.me/problems/no/5
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int L, N;
  cin >> L >> N;
  vector<int> W(N, 0);
  REP(i, N) {
    cin >> W[i];
  }
  sort(ALL(W));

  int ans = 0;
  REP(i, N) {
    if (L - W[i] >= 0) {
      L -= W[i];
      ans = i + 1;
    } else {
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
