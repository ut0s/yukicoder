/**
  @file 656.cpp
  @title  No.656 ゴルフ - yukicoder
  @url https://yukicoder.me/problems/no/656
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  int ans = 0;
  REP(i, (int)S.size()) {
    int score = stoi(S.substr(i, 1));
    if (score == 0) {
      ans += 10;
    } else {
      ans += score;
    }
  }

  cout << ans << endl;
  return 0;
}
