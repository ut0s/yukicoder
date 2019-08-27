/**
  @file 750.cpp
  @title  No.750 Frac #1 - yukicoder
  @url https://yukicoder.me/problems/no/750
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;

  vector<tuple<double, double, double>> p;
  double tmpA, tmpB;
  while (cin >> tmpA >> tmpB) {
    p.push_back(make_tuple(-1 * tmpA / tmpB, tmpA, tmpB));
  }
  sort(ALL(p));

  REP(i, N) {
    cout << get<1>(p[i]) << " " << get<2>(p[i]) << "\n";
  }

  return 0;
}
