/**
  @file 345.cpp
  @title  No.345 最小チワワ問題 - yukicoder
  @url https://yukicoder.me/problems/no/345
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  int N = (int)S.size();
  vector<int> c;
  vector<int> w;
  REP(i, N) {
    if (S.substr(i, 1) == "c") {
      c.push_back(i);
    } else if (S.substr(i, 1) == "w") {
      w.push_back(i);
    }
  }

  int ans = 1e4;
  if ((int)c.size() == 0 || (int)w.size() < 2) {
    cout << "-1" << endl;
  } else {
    for (int i = 0; i < (int)c.size(); i++) {
      for (int j = 1; j < (int)w.size(); j++) {
        if (w[j - 1] - c[i] > 0 && w[j] - c[i] > 0) {
          ans = w[j] - c[i] + 1 < ans ? w[j] - c[i] + 1 : ans;
        }
      }
    }
    ans = ans == 1e4 ? -1 : ans;
    cout << ans << endl;
  }

  return 0;
}
