/**
  @file 780.cpp
  @title  No.780 オフ会 - yukicoder
  @url https://yukicoder.me/problems/no/780
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int A, B;
  cin >> A >> B;

  int res = B - (A + 1);
  if (res >= 0) {
    cout << "YES" << endl;
    cout << abs(res) << endl;
  } else {
    cout << "NO" << endl;
    cout << abs(res) << endl;
  }

  return 0;
}
