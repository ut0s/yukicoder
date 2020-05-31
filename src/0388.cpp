/**
  @file 388.cpp
  @title  No.388 階段 (1) - yukicoder
  @url https://yukicoder.me/problems/no/388
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  double S, F;
  cin >> S >> F;

  double ans;
  if ((int)S % (int)F == 0) {
    ans = 1 + S / F;
  } else {
    ans = ceil(S / F);
  }

  cout << ans << endl;
  return 0;
}
