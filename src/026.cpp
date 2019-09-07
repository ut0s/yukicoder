/**
  @file 026.cpp
  @title  No.26 シャッフルゲーム - yukicoder
  @url https://yukicoder.me/problems/no/26
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N, M;
  cin >> N >> M;

  vector<bool> maru(3, false);
  maru[N-1] = true;

  int P, Q;
  REP(i, M) {
    cin >> P >> Q;
    iter_swap(maru.begin() + P - 1, maru.begin() + Q - 1);
  }

  REP(i, 3) {
    if (maru[i]) cout << i + 1 << endl;
  }

  return 0;
}
