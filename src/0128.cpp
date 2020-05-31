/**
  @file 128.cpp
  @title  No.128 お年玉(1) - yukicoder
  @url https://yukicoder.me/problems/no/128
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL N, M;
  cin >> N >> M;

  LL ans = (N / M) / 1000;

  cout << ans * 1000 << endl;

  return 0;
}
