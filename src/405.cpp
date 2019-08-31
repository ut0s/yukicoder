/**
  @file 405.cpp
  @title  No.405 ローマ数字の腕時計 - yukicoder
  @url https://yukicoder.me/problems/no/405
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  int T;
  cin >> S >> T;

  while (T < 0) {
    T += 12;
  }

  vector<string> rome = {"I", "II", "III", "IIII", "V", "VI", "VII", "VIII", "IX", "X", "XI", "XII"};
  REP(i, (int)rome.size()) {
    if (S == rome[i]) {
      cout << rome[((i + T) % 12)] << endl;
    }
  }

  return 0;
}
