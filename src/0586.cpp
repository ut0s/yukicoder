/**
  @file 586.cpp
  @title  No.586 ダブルブッキング - yukicoder
  @url https://yukicoder.me/problems/no/586
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int P1, P2, N;
  cin >> P1;
  cin >> P2;
  cin >> N;
  vector<int> R(N, 0);
  REP(i, N) {
    cin >> R[i];
  }

  sort(ALL(R));
  R.erase(unique(ALL(R)), R.end());

  cout << (P1 + P2) * (N - (int)R.size()) << endl;
  return 0;
}
