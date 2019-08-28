/**
  @file 716.cpp
  @title  No.716 距離 - yukicoder
  @url https://yukicoder.me/problems/no/716
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;
  vector<LL> a(N, 0);
  REP(i, N) {
    cin >> a[i];
  }

  LL min = 1e6;
  LL max = a[N - 1] - a[0];

  for (int i = 1; i < N; i++) {
    min = min > abs(a[i] - a[i - 1]) ? abs(a[i] - a[i - 1]) : min;
  }

  cout << min << endl;
  cout << max << endl;
  return 0;
}
