/**
  @file 785.cpp
  @title  No.785 色食い虫 - yukicoder
  @url https://yukicoder.me/problems/no/785
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

vector<string> split(string S, string separator) {
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
  string R, G, B;
  cin >> R >> G >> B;

  int numR, numG, numB;

  if (R == "NONE") {
    numR = 16;
  } else {
    auto tmp = split(R, ",");
    numR     = 16 - (int)tmp.size();
  }

  if (G == "NONE") {
    numG = 16;
  } else {
    auto tmp = split(G, ",");
    numG     = 16 - (int)tmp.size();
  }

  if (B == "NONE") {
    numB = 16;
  } else {
    auto tmp = split(B, ",");
    numB     = 16 - (int)tmp.size();
  }

  LL ans = (numR * numG * numB) * (numR * numG * numB);

  cout << ans << endl;
  return 0;
}
