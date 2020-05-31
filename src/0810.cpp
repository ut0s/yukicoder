/**
  @file 810.cpp
  @title  No.810 割った余りの個数 - yukicoder
  @url https://yukicoder.me/problems/no/810
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int L, R, M;
  cin >> L >> R >> M;

  if (R - L + 1 >= M) {
    cout << M << endl;
  } else {
    cout << R - L + 1 << endl;
  }

  return 0;
}
