/**
  @file 418.cpp
  @title  No.418 ミンミンゼミ - yukicoder
  @url https://yukicoder.me/problems/no/418
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  string from = "-";
  string to   = "";

  auto pos = S.find(from);
  while (pos != string::npos) {
    S.replace(pos, from.size(), to);
    pos = S.find(from, pos + to.size());
  }

  int ans = count(ALL(S), 'i');
  cout << ans << endl;
  return 0;
}
