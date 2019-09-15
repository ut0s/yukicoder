/**
  @file 717.cpp
  @title  No.717 ファッションへのこだわり - yukicoder
  @url https://yukicoder.me/problems/no/717
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N, M;
  cin >> N >> M;
  string S, T;
  cin >> S >> T;

  sort(ALL(S));
  sort(ALL(T));
  int SA = count(ALL(S), 'A');
  int SB = count(ALL(S), 'B');
  int TA = count(ALL(T), 'A');
  int TB = count(ALL(T), 'B');
  // cout << SA << "\n";
  // cout << SB << "\n";
  // cout << TA << "\n";
  // cout << TB << "\n";

  cout << min(SA, TA) + min(SB, TB) << endl;
  return 0;
}
