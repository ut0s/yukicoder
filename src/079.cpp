/**
  @file 079.cpp
  @title  No.79 過小評価ダメ・ゼッタイ - yukicoder
  @url https://yukicoder.me/problems/no/79
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;
  int L;
  map<int, int> m;
  REP(i, N) {
    cin >> L;
    m[L]++;
  }

  int ans = 0;
  for (int i = 1; i <= 6; i++) {
    ans = m[i] >= m[ans] ? i : ans;
  }

  cout << ans << endl;
  return 0;
}
