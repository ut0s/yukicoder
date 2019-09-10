/**
  @file 032.cpp
  @title  No.32 貯金箱の憂鬱 - yukicoder
  @url https://yukicoder.me/problems/no/32
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int L, M, N;
  cin >> L >> M >> N;

  int l, m, n;
  n = N % 25;
  M += (N / 25);
  m = M % 4;
  L += (M / 4);
  l = L % 10;

  cout << n + m + l << endl;
  return 0;
}
