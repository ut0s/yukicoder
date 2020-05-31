/**
  @file 113.cpp
  @title  No.113 宝探し - yukicoder
  @url https://yukicoder.me/problems/no/113
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string inS;
  cin >> inS;

  sort(ALL(inS));
  int N = count(ALL(inS), 'N');
  int E = count(ALL(inS), 'E');
  int W = count(ALL(inS), 'W');
  int S = count(ALL(inS), 'S');

  cout << (double)sqrt((N - S) * (N - S) + (W - E) * (W - E)) << endl;
  return 0;
}
