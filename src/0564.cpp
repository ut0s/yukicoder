/**
  @file 564.cpp
  @title  No.564 背の順 - yukicoder
  @url https://yukicoder.me/problems/no/564
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int H, N;
  cin >> H >> N;
  vector<int> h(N, H);
  REP(i, N) {
    cin >> h[i];
  }

  sort(ALL(h), greater<int>());
  auto itr   = find(ALL(h), H);
  string idx = to_string(distance(h.begin(), itr) + 1);

  if (idx.back() == '1') {
    cout << idx << "st" << endl;
  } else if (idx.back() == '2') {
    cout << idx << "nd" << endl;
  } else if (idx.back() == '3') {
    cout << idx << "rd" << endl;
  } else {
    cout << idx << "th" << endl;
  }

  return 0;
}
