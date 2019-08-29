/**
  @file 632.cpp
  @title  No.632 穴埋め門松列 - yukicoder
  @url https://yukicoder.me/problems/no/632
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

bool check_kado(string s) {
  vector<int> kado(3, 0);
  REP(i, 3) {
    kado[i] = stoi(s.substr(i, 1));
  }
  return (kado[1] == *max_element(ALL(kado)) || kado[1] == *min_element(ALL(kado)));
}

int main() {
  string c = "";
  string tmp;
  REP(i, 3) {
    cin >> tmp;
    c += tmp;
  }
  const string c_org = c;

  replace(ALL(c), '?', '1');
  if (check_kado(c)) {
    cout << "1";
  }

  c = c_org;
  replace(ALL(c), '?', '4');
  if (check_kado(c)) {
    cout << "4";
  }
  cout << endl;

  return 0;
  }
