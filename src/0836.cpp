/**
  @file 836.cpp
  @title  No.836 じょうよ - yukicoder
  @url https://yukicoder.me/problems/no/836
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

void zyouyo(LL N, LL div, map<LL, LL>& m) {
  LL slot = N / div;
  if (slot > 0) {
    for (LL i = 0; i < div; i++) {
      m[i] += slot;
    }
  }

  for (LL i = 0; i < N % div; i++) {
    m[1 + i]++;
  }
}

int main() {
  // input
  LL l, r, n;
  cin >> l >> r >> n;

  map<LL, LL> m;
  map<LL, LL> minus;

  // native solution
  // for (LL i = l; i <= r; i++) {
  //   m[i % n]++;
  // }

  zyouyo(r, n, m);
  zyouyo(l - 1, n, minus);

  // output
  REP(i, n) {
    cout << m[i] - minus[i] << "\n";
  }

  return 0;
}
