/**
  @file 666.cpp
  @title  No.666 1000000007で割るだけ - yukicoder
  @url https://yukicoder.me/problems/no/666
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL MOD = 1e9 + 7;

  LL A, B;
  cin >> A >> B;

  cout << (A * B) % MOD << endl;
  return 0;
}
