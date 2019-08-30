/**
  @file 410.cpp
  @title  No.410 出会い - yukicoder
  @url https://yukicoder.me/problems/no/410
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  long double Px, Py, Qx, Qy;
  cin >> Px >> Py;
  cin >> Qx >> Qy;

  cout <<std::setprecision(20)<< (abs(Px - Qx) + abs(Py - Qy)) / 2.0 << endl;
  return 0;
}
