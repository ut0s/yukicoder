/**
  @file 048.cpp
  @title  No.48 ロボットの操縦 - yukicoder
  @url https://yukicoder.me/problems/no/48
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL X, Y, L;
  cin >> X >> Y >> L;

  LL ans;
  ans = ceil((abs(X) + L - 1) / L) + ((abs(Y) + L - 1) / L);

  if (Y >= 0 && X != 0) {
    ans += 1;
  } else if (Y < 0) {
    ans += 2;
  }

  cout << ans << endl;
  return 0;
}
