/**
  @file 082.cpp
  @title  No.82 市松模様 - yukicoder
  @url https://yukicoder.me/problems/no/82
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int W, H;
  char C, C_;
  cin >> W >> H >> C;

  if (C == 'B') {
    C_ = 'W';
  } else {
    C_ = 'B';
  }

  REP(i, H) {
    REP(j, W) {
      if ((i + j) % 2 == 0) {
        cout << C;
      } else {
        cout << C_;
      }
    }
    cout << "\n";
  }

  return 0;
}
