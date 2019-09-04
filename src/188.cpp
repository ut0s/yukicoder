/**
  @file 188.cpp
  @title  No.188 HAPPY DAY - yukicoder
  @url https://yukicoder.me/problems/no/188
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int ans = 0;
  for (int month = 0; month < 12; month++) {
    for (int day = 1; day <= days[month]; day++) {
      int y = 0;
      REP(j, (int)to_string(day).size()) {
        y += stoi(to_string(day).substr(j, 1));
      }
      if (month+1 == y) {
        ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
