/**
  @file 431.cpp
  @title  No.431 死亡フラグ - yukicoder
  @url https://yukicoder.me/problems/no/431
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  bool D1, D2, D3, S;
  cin >> D1 >> D2 >> D3 >> S;

  if (S || D1 + D2 + D3 < 2) {
    cout << "SURVIVED" << endl;
  } else {
    cout << "DEAD" << endl;
  }

  return 0;
}
