/**
  @file 480.cpp
  @title  No.480 合計 - yukicoder
  @url https://yukicoder.me/problems/no/480
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;

  cout << N * (N + 1) / 2 << endl;
  return 0;
}
