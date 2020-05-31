/**
  @file 135.cpp
  @title  No.135 とりあえず1次元の問題 - yukicoder
  @url https://yukicoder.me/problems/no/135
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL N;
  cin >> N;
  vector<LL> X(N, 0);
  REP(i, N) {
    cin >> X[i];
  }

  LL ans = -1;
  if (N != 1) {
    sort(ALL(X));

    vector<LL> diff(N - 1);
    for (int i = 1; i < N; i++) {
      diff[i - 1] = X[i] - X[i - 1];
    }
    sort(ALL(diff));
    diff.erase(unique(ALL(diff)), diff.end());
    if (diff[0] != 0) {
      ans = diff[0];
    } else {
      ans = diff[1];
    }
  }

  cout << ans << endl;
  return 0;
  }
