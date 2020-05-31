/**
  @file 784.cpp
  @title  No.784 「,（カンマ）」 - yukicoder
  @url https://yukicoder.me/problems/no/784
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string N;
  cin >> N;

  const int gap = (int)N.size() % 3;
  REP(i, (int)N.size()) {
    if (i != 0 && (i - gap) % 3 == 0) {
      cout << ",";
    }
    cout << N[i] << "";
  }
  cout << "\n";

  return 0;
}
