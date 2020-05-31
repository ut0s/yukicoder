/**
  @file 725.cpp
  @title  No.725 木は明らかに森である - yukicoder
  @url https://yukicoder.me/problems/no/725
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  string from = "treeone";
  string to   = "forest";

  auto pos = S.find(from);
  while (pos != string::npos) {
    S.replace(pos, from.size(), to);
    pos = S.find(from, pos +to.size());
  }

  cout << S << endl;
  return 0;
}
