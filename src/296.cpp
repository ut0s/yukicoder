/**
  @file 296.cpp
  @title  No.296 n度寝 - yukicoder
  @url https://yukicoder.me/problems/no/296
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL N;
  int H, M, T;
  cin >> N >> H >> M >> T;

  int h = T / 60;
  int m = T % 60;

  if (M + m * (N - 1) > 59) {
    cout << (H + h * (N - 1) + (M + m * (N - 1)) / 60) % 24 << endl;
    cout <<( M + m * (N - 1))%60 << endl;
  } else {
    cout << (H + h * (N - 1)) % 24 << endl;
    cout << M + m * (N - 1) << endl;
  }

  return 0;
}
