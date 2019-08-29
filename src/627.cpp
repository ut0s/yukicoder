/**
  @file 627.cpp
  @title  No.627 ランダムウォークの軌跡 - yukicoder
  @url https://yukicoder.me/problems/no/627
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int T;
  cin >> T;

  bool ok  = true;
  int prev = 0;
  int next;
  REP(i, T) {
    cin >> next;
    if (abs(next - prev) != 1) {
      ok = false;
    }
    prev = next;
  }

  if (ok) {
    cout << "T" << endl;
  } else {
    cout << "F" << endl;
  }

  return 0;
}
