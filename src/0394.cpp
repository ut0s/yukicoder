/**
  @file 394.cpp
  @title  No.394 ハーフパイプ(1) - yukicoder
  @url https://yukicoder.me/problems/no/394
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  vector<int> S(6, 0);
  double sum = 0;
  REP(i, 6) {
    cin >> S[i];
    sum += S[i];
  }

  sort(ALL(S));
  sum -= S[0];
  sum -= S[5];

  cout << fixed << setprecision(2) << sum / 4 << endl;
  return 0;
}
