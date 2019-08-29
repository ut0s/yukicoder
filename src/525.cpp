/**
  @file 525.cpp
  @title  No.525 二度寝の季節 - yukicoder
  @url https://yukicoder.me/problems/no/525
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string T;
  cin >> T;

  int h = stoi(T.substr(0, 2));
  int m = stoi(T.substr(3, 2));

  if (m + 5 >= 60) {
    if (h + 1 >= 24) {
      h = 0;
      m = m + 5 - 60;
    } else {
      h++;
      m = m + 5 - 60;
    }
  } else {
    m += 5;
  }

  cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << endl;
  return 0;
}
