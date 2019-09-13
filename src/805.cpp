/**
  @file 805.cpp
  @title  No.805 UMG - yukicoder
  @url https://yukicoder.me/problems/no/805
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  int ans = 0;
  REP(i, N) {
    if (S[i] == 'M') {
      int k = min(i, N - i);
      for (int j = 1; j <= k; j++) {
        if (S[i - j] == 'U' && S[i + j] == 'G') {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
