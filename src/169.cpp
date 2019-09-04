/**
  @file 169.cpp
  @title  No.169 何分かかるの！？ - yukicoder
  @url https://yukicoder.me/problems/no/169
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int K;
  LL S;
  cin >> K >> S;

  cout << fixed<<setprecision(0)<<floor(100.0 * S / (100.0 - (double)K)) << endl;
  return 0;
}
