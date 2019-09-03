/**
  @file 279.cpp
  @title  No.279 木の数え上げ - yukicoder
  @url https://yukicoder.me/problems/no/279
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  map<string, int> m;
  REP(i, (int)S.size()) {
    m[S.substr(i, 1)]++;
  }

  cout << min({m["t"], m["r"], m["e"] / 2}) << endl;
  return 0;
}
