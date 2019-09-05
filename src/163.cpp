/**
  @file 163.cpp
  @title  No.163 cAPSlOCK - yukicoder
  @url https://yukicoder.me/problems/no/163
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  string ans = "";
  REP(i, (int)S.size()) {
    char c = S[i];
    if (('a' <= c) && (c <= 'z')) {
      string tmp = S.substr(i, 1);
      transform(ALL(tmp), tmp.begin(), ::toupper);
      ans += tmp;
    } else if (('A' <= c) && (c <= 'Z')) {
      string tmp = S.substr(i, 1);
      transform(ALL(tmp), tmp.begin(), ::tolower);
      ans += tmp;
    }
  }

  cout << ans << endl;
  return 0;
}
