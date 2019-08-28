/**
  @file 646.cpp
  @title  No.646 逆ピラミッド - yukicoder
  @url https://yukicoder.me/problems/no/646
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++, cout << "\n") {
    for (int j = 0; j < N - i; j++) {
      cout << N;
    }
  }

  return 0;
}
