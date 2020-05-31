/**
  @file 383.cpp
  @title  No.383 レーティング - yukicoder
  @url https://yukicoder.me/problems/no/383
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int a, b;
  cin >> a >> b;

  string ans = "";
  if (a == b) {
    ans = "0";
  } else if (a < b) {
    ans += "+";
    ans += to_string(b - a);
  } else {
    ans += "-";
    ans += to_string(a - b);
  }

  cout << ans << endl;
  return 0;
}
