/**
  @file 735.cpp
  @title  No.735 接線 - yukicoder
  @url https://yukicoder.me/problems/no/735
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  double r, d;
  cin >> r >> d;

  cout <<fixed<<setprecision(12)<< sqrt(d * d - r * r) << endl;
  return 0;
}
