/**
  @file 024.cpp
  @title  No.24 数当てゲーム - yukicoder
  @url https://yukicoder.me/problems/no/24
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;
  vector<int> ABCD(4, 0);
  string R;

  map<int, int> m;
  REP(i, 10) {
    m[i] = 1;
  }

  REP(i, N) {
    cin >> ABCD[0] >> ABCD[1] >> ABCD[2] >> ABCD[3] >> R;
    if (R == "YES") {
      REP(i, 4) {
        m[ABCD[i]]++;
      }
    } else {
      REP(i, 4) {
        m[ABCD[i]]--;
      }
    }
  }

  using pair_type = decltype(m)::value_type;
  auto pr         = std::max_element(ALL(m), [](const pair_type& p1, const pair_type& p2) {
    return p1.second < p2.second;
  });

  cout << pr->first << endl;
  return 0;
}
