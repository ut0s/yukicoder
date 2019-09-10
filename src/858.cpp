/**
  @file 858.cpp
  @title  No.858 わり算 - yukicoder
  @url https://yukicoder.me/problems/no/858
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL A, B;
  cin >> A >> B;

  // cout << fixed << setprecision(50) << A / B << endl; // error
  cout << A / B << ".";
  A = (A % B) * 10;

  REP(i, 50) {
    cout << A / B;
    A = (A % B) * 10;
  }

  cout << endl;

  return 0;
}
