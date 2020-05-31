/**
  @file 264.cpp
  @title  No.264 じゃんけん - yukicoder
  @url https://yukicoder.me/problems/no/264
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N, K;
  cin >> N >> K;

  if (N == K) {
    cout << "Drew" << endl;
  } else if ((N == 0 && K == 1)
             || (N == 1 && K == 2)
             || (N == 2 && K == 0)) {
    cout << "Won" << endl;
  } else {
    cout << "Lost" << endl;
  }

  return 0;
}
