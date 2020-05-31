/**
  @file 156.cpp
  @title  No.156 キャンディー・ボックス - yukicoder
  @url https://yukicoder.me/problems/no/156
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  LL M;
  cin >> N >> M;
  vector<LL> C(N, 0);
  REP(i, N) {
    cin >> C[i];
  }
  sort(ALL(C));

  LL ans = 0;
  int end;
  REP(i, N) {
    ans += C[i];
    if (M < ans) {
      end = i;
      break;
    }

    if (i == N - 1) {
      end = N;
    }
  }

  cout << end << endl;
  return 0;
}
