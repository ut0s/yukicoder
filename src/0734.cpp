/**
  @file 734.cpp
  @title  No.734 Careful Engineer - yukicoder
  @url https://yukicoder.me/problems/no/734
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL A, B, C;
  cin >> A >> B >> C;

  if (60 * A < B) {
    cout << "-1" << endl;
  } else {
    // naive
    // for (LL X = 1;; X++) {
    //   LL by_hand = 60 * A * X;
    //   LL by_prog = B * X + C * 3600;
    //   if (by_hand >= by_prog) {
    //     cout << X << endl;
    //     break;
    //   }
    // }
    cout << ((C * 3600) + (60 * A - B) - 1) / (60 * A - B) << endl;
  }

  return 0;
}
