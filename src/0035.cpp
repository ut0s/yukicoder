/**
  @file 035.cpp
  @title  No.35 タイパー高橋 - yukicoder
  @url https://yukicoder.me/problems/no/35
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;
  vector<pair<int, string>> TS(N);
  REP(i, N) {
    cin >> TS[i].first >> TS[i].second;
  }

  LL can    = 0;
  LL cannot = 0;

  REP(i, N) {
    ;
    LL limit = (12 * TS[i].first) / 1000;
    if (limit > (LL)TS[i].second.size()) {
      can += (LL)TS[i].second.size();
    } else {
      can += limit;
      cannot += (TS[i].second.size() - limit);
    }
  }

  cout << can << " " << cannot << endl;
  return 0;
}
