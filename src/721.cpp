/**
  @file 721.cpp
  @title  No.721 Die tertia (ディエ・テルツィア) - yukicoder
  @url https://yukicoder.me/problems/no/721
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  int year = stoi(S.substr(0, 4));
  int mon  = stoi(S.substr(5, 2));
  int day  = stoi(S.substr(8, 2));
  // cout << year << "/" << mon << "/" << day << endl;

  struct tm ymd = {0, 0, 0, day, mon - 1, year - 1900};
  time_t now    = mktime(&ymd);

  now += 2 * 24 * 60 * 60;
  struct tm* ymd_2d = localtime(&now);

  char ans[81];
  strftime(ans, sizeof(ans), "%Y/%m/%d", ymd_2d);

  cout << ans << endl;
  return 0;
}
