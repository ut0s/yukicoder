/**
  @file 427.cpp
  @title  No.427 テレビ - yukicoder
  @url https://yukicoder.me/problems/no/427
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int H, W;
  cin >> H >> W;

  if (H > W) {
    cout << "TATE" << endl;
  } else {
    cout << "YOKO" << endl;
  }

  return 0;
}
