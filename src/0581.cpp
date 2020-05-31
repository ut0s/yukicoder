/**
  @file 581.cpp
  @title  No.581 XOR - yukicoder
  @url https://yukicoder.me/problems/no/581
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL A, C;
  cin >> A >> C;

  // Naive solution
  // for (LL B = 0; B < 1e12; B++) {
  //   if ((A ^ B) == C) {
  //     cout << B << endl;
  //     break;
  //   }
  // }

  cout << (A ^ C) << endl;

  return 0;
}
