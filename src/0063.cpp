/**
  @file 063.cpp
  @title  No.63 ポッキーゲーム - yukicoder
  @url https://yukicoder.me/problems/no/63
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL L, K;
  cin >> L >> K;

  cout << K*((L - 1) / (2 * K)) << endl;
  return 0;
}
