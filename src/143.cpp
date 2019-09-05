/**
  @file 143.cpp
  @title  No.143 豆 - yukicoder
  @url https://yukicoder.me/problems/no/143
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int K, N, F;
  cin >> K >> N >> F;
  int A;
  LL ans = K * N;
  REP(i, F) {
    cin >> A;
    ans -= A;
  }

  if (ans < 0) {
    cout << "-1" << endl;
  } else {
    cout << ans << endl;
  }

  return 0;
}
