/**
  @file 597.cpp
  @title  No.597 concat - yukicoder
  @url https://yukicoder.me/problems/no/597
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;

  string S;
  string ans = "";
  REP(i, N) {
    cin >> S;
    ans += S;
  }

  cout << ans << endl;
  return 0;
}
