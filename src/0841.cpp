/**
  @file 841.cpp
  @title  No.841 8/32 - yukicoder
  @url https://yukicoder.me/problems/no/841
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  if ((s1 == "Sat" || s1 == "Sun") && (s2 != "Sat" && s2 != "Sun")) {
    cout << "8/32" << endl;
  } else if ((s1 == "Sat" || s1 == "Sun") && (s2 == "Sat" || s2 == "Sun")) {
    cout << "8/33" << endl;
  } else {
    cout << "8/31" << endl;
  }

  return 0;
}
