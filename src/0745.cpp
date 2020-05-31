/**
  @file 745.cpp
  @title  No.745 letinopia raoha - yukicoder
  @url https://yukicoder.me/problems/no/745
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if (D == 10) {
    cout << "Impossible\n";
  } else {
    cout << "Possible\n";
    LL score = 0;
    int sum  = A + B;
    for (int i = 1; i <= sum; i++) {
      int combo = pow(2, ((i + 100 - 1) / 100) - 1);
      if (B > 0) {
        score += 50 * combo;
        B--;
      } else if (A > 0) {
        score += 100 * combo;
        A--;
      }
      // cout << "i: " << i << " combo: " << combo << " score: " << score << endl;
    }
    cout << score << endl;
  }

  return 0;
}
