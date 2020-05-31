/**
  @file 651.cpp
  @title  No.651 E869120 and Driving - yukicoder
  @url https://yukicoder.me/problems/no/651
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  double a;
  cin >> a;

  double mvelo   = 100.0 / 60.0;
  double minutes = a / mvelo;
  // cout << mvelo << endl;
  // cout << minutes << endl;

  cout << 10 + ((int)minutes / 60) << ":" << setfill('0') << setw(2) << (int)minutes % 60 << endl;
  return 0;
}
