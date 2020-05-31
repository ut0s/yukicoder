/**
  @file 275.cpp
  @title  No.275 中央値を求めよ - yukicoder
  @url https://yukicoder.me/problems/no/275
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
  REP(i, N) { cin >> A[i]; }
  sort(ALL(A));

  if (N % 2 == 0) {
    cout << ((double)A[(N / 2) - 1] + (double)A[N / 2]) / 2.0 << endl;
  } else {
    cout <<  (double)A[N / 2]  << endl;
  }
  return 0;
}
