/**
  @file 337.cpp
  @title  No.337 P versus NP - yukicoder
  @url https://yukicoder.me/problems/no/337
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N, P;
  cin >> N >> P;

  if (P == N * P) {
    cout << "=" << endl;
  } else {
    cout << "!=" << endl;
  }

  return 0;
}
