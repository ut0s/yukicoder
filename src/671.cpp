/**
  @file 671.cpp
  @title  No.671 1000000007 - yukicoder
  @url https://yukicoder.me/problems/no/671
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  string std = "1000000007";

  cout << abs((int)S.size() - (int)std.size()) << endl;
  return 0;
}
