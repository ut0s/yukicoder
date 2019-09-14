/**
  @file 736.cpp
  @title  No.736 約比 - yukicoder
  @url https://yukicoder.me/problems/no/736
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

template <class T>
T gcd(T a, T b) {
  if (b == 0)
    return a;

  return gcd(b, a % b);
}

int main() {
  int N;
  cin >> N;
  vector<LL> a(N, 0);
  LL div;
  REP(i, N) {
    cin >> a[i];
    if (i > 0) {
      div = gcd(a[i], div);
    } else {
      div = a[0];
    }
  }

  cout << a[0] / div << ":";
  for (int i = 1; i < N - 1; i++) {
    cout << a[i] / div << ":";
  }
  cout << a[N - 1] / div << "\n";

  return 0;
}
