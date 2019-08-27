/**
  @file 804.cpp
  @title  No.804 野菜が苦手 - yukicoder
  @url https://yukicoder.me/problems/no/804
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  int ans = 0;
  for (int yasai = 1; yasai <= A && yasai * C <= B; yasai++) {
    if ((yasai * (1 + C)) <= D) {
      ans = yasai;
    } else {
      break;
    }
  }

  cout << ans << endl;
  return 0;
}
