/**
  @file 138.cpp
  @title  No.138 化石のバージョン - yukicoder
  @url https://yukicoder.me/problems/no/138
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

vector<string> split(string S) {
  auto separator        = string(".");
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

template <class T>
void show(vector<T>& v) {
  for (uint i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";
}

int main() {
  string S0, S1;
  cin >> S0;
  cin >> S1;

  vector<string> ret0 = split(S0);
  vector<string> ret1 = split(S1);

  LL old = stoi(ret0[0]) * 1000000 + stoi(ret0[1]) * 10000 + stoi(ret0[2]);
  LL now = stoi(ret1[0]) * 1000000 + stoi(ret1[1]) * 10000 + stoi(ret1[2]);
  // cout << old<<endl;
  // cout << now<<endl;

  if (old >= now) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
