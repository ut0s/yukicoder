/**
  @file 289.cpp
  @title  No.289 数字を全て足そう - yukicoder
  @url https://yukicoder.me/problems/no/289
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  int ans = 0;
  REP(i, (int)S.size()) {
    try {
      ans += stoi(S.substr(i, 1));
    } catch (std::invalid_argument) {
      continue;
    }
  }

  cout << ans << endl;
  return 0;
}
