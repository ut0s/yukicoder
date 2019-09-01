/**
  @file 369.cpp
  @title  No.369 足し間違い - yukicoder
  @url https://yukicoder.me/problems/no/369
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;
  vector<int> A(N, 0);
  LL sum = 0;
  REP(i, N) {
    cin >> A[i];
    sum += A[i];
  }
  LL v;
  cin >> v;

  cout << sum - v << endl;
  return 0;
}
