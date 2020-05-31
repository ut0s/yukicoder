/**
  @file 481.cpp
  @title  No.481 1から10 - yukicoder
  @url https://yukicoder.me/problems/no/481
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  vector<int> B(9);

  REP(i, 9) {
    cin >> B[i];
  }

  int ans = 10;
  for (int i = 0; i < 9; i++) {
    if ((i + 1) != B[i]) {
      ans = (i + 1);
      break;
    }
  }

  cout << ans << endl;
  return 0;
}
