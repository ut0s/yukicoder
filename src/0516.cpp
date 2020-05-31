/**
  @file 516.cpp
  @title  No.516 赤と青の風船 - yukicoder
  @url https://yukicoder.me/problems/no/516
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  vector<pair<int, string>> R_B;
  R_B.push_back(make_pair(0, "RED"));
  R_B.push_back(make_pair(0, "BLUE"));
  while (cin >> S) {
    if (S == "RED") R_B[0].first--;
    if (S == "BLUE") R_B[1].first--;
  }

  sort(ALL(R_B));

  cout << R_B[0].second << endl;
  return 0;
}
