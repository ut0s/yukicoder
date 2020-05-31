/**
  @file main.cpp
  @title No.857 素振り
  @url https://yukicoder.me/problems/no/857
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL X, Y, Z;
  cin >> X >> Y >> Z;

  LL ans = Z;
  if (X <= Z) ans--;
  if (Y <= Z) ans--;

  cout << ans << endl;

  return 0;
}
