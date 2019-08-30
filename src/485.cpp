/**
  @file 485.cpp
  @title  No.485 方程式のお勉強 - yukicoder
  @url https://yukicoder.me/problems/no/485
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  double A, B;
  cin >> A >> B;

  double x = B / A;
  if (x == ceil(B / A)) {
    cout << x << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
