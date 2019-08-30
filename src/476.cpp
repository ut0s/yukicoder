/**
  @file 476.cpp
  @title  No.476 正しくない平均 - yukicoder
  @url https://yukicoder.me/problems/no/476
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL n, a;
  cin >> n >> a;
  vector<LL> x(n, 0);
  LL sum = 0;
  REP(i, n) {
    cin >> x[i];
    sum += x[i];
  }

  if (a * n == sum) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
