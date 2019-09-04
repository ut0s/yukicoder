/**
  @file 203.cpp
  @title  No.203 ゴールデン・ウィーク(1) - yukicoder
  @url https://yukicoder.me/problems/no/203
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S = "";
  string tmp;
  REP(i, 2) {
    cin >> tmp;
    S += tmp;
  }

  int N = (int)S.size();
  vector<int> dp(N + 1, 0);
  REP(i, N) {
    if (S.substr(i, 1) == "o") {
      dp[i + 1] = dp[i] + 1;
    }
  }
  sort(ALL(dp));

  cout << dp[N] << endl;
  return 0;
}
