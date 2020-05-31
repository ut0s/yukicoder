/**
  @file 046.cpp
  @title  No.46 はじめのn歩 - yukicoder
  @url https://yukicoder.me/problems/no/46
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  long double a, b;
  cin >> a >> b;
  cout << (long long int)ceil(b / a) << endl;
  return 0;
}
