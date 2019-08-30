/**
  @file 494.cpp
  @title  No.494 yukicoder - yukicoder
  @url https://yukicoder.me/problems/no/494
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  string std = "yukicoder";
  REP(i, (int)S.size()) {
    if (S[i] != std[i]) {
      cout << std[i] << endl;
    }
  }

  return 0;
}
