/**
  @file 182.cpp
  @title  No.182 新規性の虜 - yukicoder
  @url https://yukicoder.me/problems/no/182
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL N;
  cin >> N;
  vector<LL> A(N, 0);
  map<LL, LL> m;
  REP(i, N) {
    cin >> A[i];
    m[A[i]]++;
  }

  sort(ALL(A));
  A.erase(unique(ALL(A)), A.end());

  LL ans = 0;
  REP(i, (int)A.size()) {
    if (m[A[i]] == 1) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
