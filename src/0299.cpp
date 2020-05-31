/**
  @file 299.cpp
  @title  No.299 蟻本が読めない - yukicoder
  @url https://yukicoder.me/problems/no/299
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL N;
  cin >> N;

  LL a0 = 316;
  LL d  = 52;

  cout << a0 + (N - 1) * d << endl;
  return 0;
}
