/**
  @file 021.cpp
  @title  No.21 平均の差 - yukicoder
  @url https://yukicoder.me/problems/no/21
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> n(N, 0);
  REP(i, N) {
    cin >> n[i];
  }
  sort(ALL(n));

  cout << n.back() - n.front() << endl;
  return 0;
}
