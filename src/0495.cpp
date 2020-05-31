/**
  @file 495.cpp
  @title  No.495 (^^*) Easy - yukicoder
  @url https://yukicoder.me/problems/no/495
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  string lface = "(^^*)";
  string rface = "(*^^)";
  int l        = 0;
  int r        = 0;

  while ((int)S.size() > 1) {
    if (S.substr(0, 5) == lface) {
      l++;
    } else {
      r++;
    }
    S.erase(0, 5);
  }

  cout << l << " " << r << endl;
  return 0;
}
