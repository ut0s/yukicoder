/**
  @file 070.cpp
  @title  No.70 睡眠の重要性！ - yukicoder
  @url https://yukicoder.me/problems/no/70
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

vector<string> split(string S) {
  auto separator        = string(":");
  auto separator_length = separator.length();

  auto list = vector<string>();

  auto offset = string::size_type(0);
  while (1) {
    auto pos = S.find(separator, offset);
    if (pos == string::npos) {
      list.push_back(S.substr(offset));
      break;
    }
    list.push_back(S.substr(offset, pos - offset));
    offset = pos + separator_length;
  }

  return list;
}

int main() {
  int N;
  cin >> N;
  vector<pair<string, string>> time(N, make_pair("", ""));
  REP(i, N) {
    cin >> time[i].first >> time[i].second;
  }

  LL sleep{0};
  REP(i, N) {
    auto neru  = split(time[i].first);
    auto okiru = split(time[i].second);

    LL s0 = (stoi(neru[0]) * 60 + stoi(neru[1]));
    LL s1 = (stoi(okiru[0]) * 60 + stoi(okiru[1]));
    sleep += s1 - s0 >= 0 ? s1 - s0 : s1 + 24 * 60 - s0;
  }

  cout << sleep << endl;
  return 0;
}
