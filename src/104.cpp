/**
  @file 104.cpp
  @title  No.104 国道 - yukicoder
  @url https://yukicoder.me/problems/no/104
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  int road = 1;
  REP(i, (int)S.size()) {
    if (S.substr(i, 1) == "L") {
      road = 2 * road;
    } else {
      road = 2 * road + 1;
    }
  }

  cout << road << endl;
  return 0;
}
