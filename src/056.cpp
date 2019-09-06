/**
  @file 056.cpp
  @title  No.56 消費税 - yukicoder
  @url https://yukicoder.me/problems/no/56
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL D;
  int P;
  cin >> D >> P;

  cout << D * (100 + P) / 100 << endl;
  return 0;
}
