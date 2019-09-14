/**
  @file 740.cpp
  @title  No.740 幻の木 - yukicoder
  @url https://yukicoder.me/problems/no/740
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL N, M, P, Q;
  cin >> N >> M >> P >> Q;

  LL max_month = (N + M + 1) / M;
  for (LL i = 1; i <= max_month; i++) {
    LL month = (i % 12) == 0 ? 12 : i % 12;
    if (P <= month && month <= P + Q - 1) {
      N -= 2 * M;
    } else {
      N -= M;
    }

    if (N <= 0) {
      cout << i << endl;
      break;
    }
  }

  return 0;
}
