/**
  @file 851.cpp
  @title  No.851 テストケース - yukicoder
  @url https://yukicoder.me/problems/no/851
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;

  cin.ignore();
  vector<LL> v;
  string S;
  for (int i = 0; i < N; ++i) {
    getline(cin, S);
    if (S.find(' ') != string::npos) {
      cout << "\"assert\"" << endl;
      return 0;
    }
    v.emplace_back(stoll(S));
  }
  vector<LL> u{v[0] + v[1], v[0] + v[2], v[1] + v[2]};
  sort(u.begin(), u.end(), greater<>());
  u.erase(unique(u.begin(), u.end()), u.end());
  cout << u[1] << "\n";

  return 0;
}
