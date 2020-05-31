/**
  @file 570.cpp
  @title  No.570 3人兄弟（その１） - yukicoder
  @url https://yukicoder.me/problems/no/570
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  vector<pair<int, string>> H;
  vector<string> ABC = {"A", "B", "C"};
  int tmp;
  REP(i, 3) {
    cin >> tmp;
    H.push_back(make_pair(-1 * tmp, ABC[i]));
  }
  sort(ALL(H));
  REP(i, 3) {
    cout << H[i].second << endl;
  }
  return 0;
}
