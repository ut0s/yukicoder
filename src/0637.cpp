/**
  @file 637.cpp
  @title  No.637 X: Yet Another FizzBuzz Problem - yukicoder
  @url https://yukicoder.me/problems/no/637
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int ans = 0;
  int a;
  while (cin >> a) {
    if (a % 3 == 0 && a % 5 == 0) {
      ans += 8;
    } else if (a % 3 == 0 && a % 5 != 0) {
      ans += 4;
    } else if (a % 3 != 0 && a % 5 == 0) {
      ans += 4;
    } else {
      ans += (int)to_string(a).size();
    }
  }

  cout << ans << endl;
  return 0;
}
