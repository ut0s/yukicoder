/**
  @file 791.cpp
  @title  No.791 うし数列 - yukicoder
  @url https://yukicoder.me/problems/no/791
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string strN;
  cin >> strN;

  if (strN.front() != '1' || (int)strN.size() == 1) {
    cout << "-1" << endl;
    exit(0);
  }

  int ans = 0;
  for (int i = 1; i < (int)strN.size(); i++) {
    if (strN[i] == '3') {
      ans++;
    } else {
      cout << "-1" << endl;
      exit(0);
    }
  }

  cout << ans << endl;
  return 0;
}
