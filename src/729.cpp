/**
  @file 729.cpp
  @title  No.729 文字swap - yukicoder
  @url https://yukicoder.me/problems/no/729
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  int i, j;
  cin >> i >> j;

  REP(k, (int)S.size()) {
    if (i == k) {
      cout << S[j];
    } else if (j == k) {
      cout << S[i];
    } else {
      cout << S[k];
    }
  }
  cout << endl;

  return 0;
}
