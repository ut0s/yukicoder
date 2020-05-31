/**
  @file 842.cpp
  @title  No.842 初詣 - yukicoder
  @url https://yukicoder.me/problems/no/842
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  vector<int> coin(6, 0);
  vector<int> c = {500, 100, 50, 10, 5, 1};
  REP(i, 6) {
    cin >> coin[i];
  }
  int G;
  cin >> G;

  int goal = G;
  REP(i, 6) {
    if (coin[i] == 0) {
      continue;
    }

    while (coin[i] > 0 && goal - c[i] >= 0) {
      goal -= c[i];
      coin[i]--;
    }
  }

  if (goal == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
