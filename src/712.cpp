/**
  @file 712.cpp
  @title  No.712 赤旗 - yukicoder
  @url https://yukicoder.me/problems/no/712
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> A(N, "");

  int ans = 0;
  REP(i, N) {
    cin >> A[i];
    ans += count(ALL(A[i]), 'W');
  }

  cout << ans << endl;
  return 0;
}
