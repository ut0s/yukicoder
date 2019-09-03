/**
  @file 224.cpp
  @title  No.224 文字列変更(easy) - yukicoder
  @url https://yukicoder.me/problems/no/224
**/

#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define ULL unsigned long long
#define LD long double
#define MP make_pair
#define PB push_back
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define DEBUG(x) cout << "(L:" << __LINE__ << ") DEBUG: " << x << endl;
#define MOD 1e9 + 7

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  string T;
  cin >> T;

  int ans = 0;
  REP(i, N) {
    if (S[i] != T[i]) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
