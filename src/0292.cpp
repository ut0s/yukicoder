/**
  @file 292.cpp
  @title  No.292 芸名 - yukicoder
  @url https://yukicoder.me/problems/no/292
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  int t, u;
  cin >> S >> t >> u;

  if (t == u) {
    S.erase(t, 1);
  } else if (t < u) {
    S.erase(t, 1);
    S.erase(u - 1, 1);
  } else {
    S.erase(u, 1);
    S.erase(t-1, 1);
  }

  cout << S << endl;
  return 0;
}
