/**
  @file 744.cpp
  @title  No.744 循環小数N桁目 Easy - yukicoder
  @url https://yukicoder.me/problems/no/744
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;

  string loop = "285714";

  int idx = N % (int)loop.size();

  cout << loop[idx - 1] << endl;
  return 0;
}
