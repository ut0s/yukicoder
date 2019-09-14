/**
  @file 730.cpp
  @title  No.730 アルファベットパネル - yukicoder
  @url https://yukicoder.me/problems/no/730
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  sort(ALL(S));
  size_t orgS = S.size();

  S.erase(unique(ALL(S)), S.end());
  size_t uniS = S.size();

  if (orgS == uniS) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
