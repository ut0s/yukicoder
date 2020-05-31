/**
  @file 773.cpp
  @title  No.773 コンテスト - yukicoder
  @url https://yukicoder.me/problems/no/773
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int A, B;
  cin >> A >> B;

  vector<int> days = {23, 24, 25};
  if (B < 23 && 25 < A) {
  } else {
    for (int q = A; q <= B; q++) {
      auto itr = find(days.begin(), days.end(), q);
      if (itr != days.end()) {
        days.erase(itr);
      } else {
        continue;
      }
    }
  }

  cout << days.size() << endl;
  return 0;
}
