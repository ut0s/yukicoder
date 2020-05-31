/**
  @file 185.cpp
  @title  No.185 和風 - yukicoder
  @url https://yukicoder.me/problems/no/185
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;
  vector<int> Y_X(N, 0);
  int X, Y;
  REP(i, N) {
    cin >> X >> Y;
    Y_X[i] = Y - X;
  }
  sort(ALL(Y_X));
  Y_X.erase(unique(ALL(Y_X)), Y_X.end());

  if (Y_X.size() == 1 && Y_X[0] > 0) {
    cout << Y_X[0] << endl;
  } else {
    cout << "-1" << endl;
  }

  return 0;
}
