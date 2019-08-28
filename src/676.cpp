/**
  @file 676.cpp
  @title  No.676 C0nvertPr0b1em - yukicoder
  @url https://yukicoder.me/problems/no/676
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  replace(ALL(S), 'I', '1');
  replace(ALL(S), 'l', '1');
  replace(ALL(S), 'O', '0');
  replace(ALL(S), 'o', '0');

  cout << S << endl;
  return 0;
}
