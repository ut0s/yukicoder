/**
  @file 536.cpp
  @title  No.536 人工知能 - yukicoder
  @url https://yukicoder.me/problems/no/536
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  string ans;
  if (S.substr((int)S.size() - 2, 2) == "ai") {
    ans = S.substr(0, (int)S.size() - 2) + "AI";
  } else {
    ans = S + "-AI";
  }
  cout << ans << endl;

  return 0;
}
