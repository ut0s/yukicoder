/**
  @file 547.cpp
  @title  No.547 未知の言語 - yukicoder
  @url https://yukicoder.me/problems/no/547
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;

  vector<string> S(N, "");
  vector<string> T(N, "");

  REP(i, N) {
    cin >> S[i];
  }
  REP(i, N) {
    cin >> T[i];
  }

  REP(i, N) {
    if (S[i] != T[i]) {
      cout << i + 1 << "\n"
           << S[i] << "\n"
           << T[i] << endl;
    }
  }

  return 0;
}
