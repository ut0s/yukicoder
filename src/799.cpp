/**
  @file 799.cpp
  @title  No.799 赤黒かーどげぇむ - yukicoder
  @url https://yukicoder.me/problems/no/799
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int i;

  int A, B, C, D;
  cin >> A >> B >> C >> D;

  int ans = 0;
  for (i = A; i <= B; i++) {
    if (C <= i && i <= D) {
      ans += D - C + 1 - 1;
    } else {
      ans += D - C + 1;
    }
  }

  cout << ans << endl;
  return 0;
}
