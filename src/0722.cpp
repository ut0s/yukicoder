/**
  @file 722.cpp
  @title  No.722 100×100=1000 - yukicoder
  @url https://yukicoder.me/problems/no/722
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL A, B;
  cin >> A >> B;

  LL err_limit = 99999999;

  regex re("[1-9]0{2,}");
  // cout << regex_match(to_string(A), re) << endl;
  // cout << regex_match(to_string(B), re) << endl;

  if (regex_match(to_string(abs(A)), re) == true && regex_match(to_string(abs(B)), re) == true) {
    cout << A * B / 10 << "\n";
  } else {
    if (-1 * err_limit <= (A * B) && (A * B) <= err_limit) {
      cout << A * B << "\n";
    } else {
      cout << "E\n";
    }
  }

  return 0;
}
