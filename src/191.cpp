/**
  @file 191.cpp
  @title  No.191 供託金 - yukicoder
  @url https://yukicoder.me/problems/no/191
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;
  vector<LL> C(N, 0);
  LL valid_poll = 0;
  REP(i, N) {
    cin >> C[i];
    valid_poll += C[i];
  }

  LL ans = 0;
  REP(i, N) {
    if (C[i] <= (double)valid_poll / (double)10) {
      ans += 30;
    }
  }

  cout << ans << endl;
  return 0;
}
